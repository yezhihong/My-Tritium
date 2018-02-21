const TString ROOTFILES_DIR = "./Rootfiles";
const TString ROOTFILES_NAME = "tritium";

/*inline TChain* gAddTree(const Int_t aRunNo,const TString& aArm,TString aTreeName="T"){{{*/
inline TChain* gAddTree(const Int_t aRunNo,TString aTreeName="T")
{
	TChain* aTree=new TChain(aTreeName.Data(),"Main Tree");
	Int_t index=0;
	TString File_Form=Form("%s_%d.root",ROOTFILES_NAME.Data(),aRunNo);
	if ( gSystem->FindFile(ROOTFILES_DIR.Data(),File_Form) )
	{
		aTree->Add(Form("%s/%s_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo));
	}
	else{  
		cerr<<Form("       *ERROR*, no rootfile founded for Run#%d",aRunNo)<<endl;
		return 0;
	}
	index++;
	File_Form=Form("%s_%d_%d.root",ROOTFILES_NAME.Data(),aRunNo,index);
	while ( gSystem->FindFile(ROOTFILES_DIR.Data(),File_Form) )
	{
		aTree->Add(Form("%s/%s_%d_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo,index));
		index++;
		File_Form=Form("%s_%d_%d.root",ROOTFILES_NAME.Data(),aRunNo,index);
	}
	aTree->LoadTree(0);

	return aTree;
}
/*}}}*/

/////////////////////////////////
// PreScale Factors
/////////////////////////////////
/*inline void gGet_PS(const Int_t& RunNo,const TString& aArm, Int_t *aPar ){{{*/
inline int gGet_PS(const Int_t& aRunNo,Int_t aPar[8] )
{
	TString filename_ps = (Form("%s/%s_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo));
	TString File_Form=Form("%s_%d.root",ROOTFILES_NAME.Data(),aRunNo);
	if ( gSystem->FindFile(ROOTFILES_DIR.Data(),File_Form) )
	{	 
		TFile *file_ps = new TFile(filename_ps.Data(),"r"); 
		THaRun *aRun = (THaRun*) file_ps->Get("Run_Data"); 
		TArrayI ps = aRun->GetParameters()->GetPrescales();

		for(int i=0;i<8;i++){
			aPar[i] = ps[i];
		}

		file_ps->Close();
		return 0;
	}
	else{
		cerr <<"File Cannot be found "<< filename_ps.Data() <<endl;
		return -1;
	}
}
/*}}}*/

//////////////////////////////////////////////////////////////////////////////////////////
// Live Time(T_i) = Trigger_Events(T_i) * PS(T_i) / Scaler_Events(T_i)
//////////////////////////////////////////////////////////////////////////////////////////
/*inline double gCal_LiveTime_Avg(TTree* aT_Tree,const TString& aDAQ_Cut,TTree* aS_Tree,const TString& aRaw_Branch){{{*/
inline int gCal_LiveTime_Avg(TTree* aT_Tree, TTree* aS_Tree, const TString& aDAQ_Cut, const TString& aRaw_Branch, const Int_t aPS, Double_t* LiveTime, Double_t* LT_Err)
{
	Int_t DAQ_Trigger=(Int_t)aT_Tree->GetEntries(aDAQ_Cut.Data());
	DAQ_Trigger *=aPS; //Corrected if PS is larger than one
	aT_Tree->SetNotify(0);
	Double_t Raw_Trigger;
	aS_Tree->SetBranchAddress(aRaw_Branch.Data(),&Raw_Trigger);
	Int_t scalerT_nentries=aS_Tree->GetEntries();
	aS_Tree->GetEntry(scalerT_nentries-1);

	if ( Raw_Trigger>1e-6 && DAQ_Trigger>1e-6 )
	{
		LiveTime[0]=(Double_t) DAQ_Trigger/Raw_Trigger;
		LT_Err[0]=LiveTime[0]*sqrt(fabs(1./DAQ_Trigger-1./Raw_Trigger)); //Z. Ye, fix the "+" into "-" since DAQ_Trigger and RAW_Trigger are correlated. 01/15/2015
		return 0;
	}else
		return -1;
}
/*}}}*/

//int main(){/*{{{*/
void DeadTime(){
	Int_t RunNo = 0; cout<<"--- Run No. = "; cin>>RunNo;
	TString Arm = "";
	TString Scaler_Name = "";
	TString Decoder_Name = "";
	TString Trigger_Name = "";
	if(RunNo<10000){
		Arm = "L";
		Scaler_Name = "TSLeft";
		Decoder_Name = "DL";
		Trigger_Name = "LeftT_N_";
	}else{ 
		Arm = "R";
		Scaler_Name = "TSRight";
		Decoder_Name = "DR";
		Trigger_Name = "RightT_N_";
	}

	TChain *T_Tree = gAddTree(RunNo, "T");
	TChain *S_Tree = gAddTree(RunNo, Scaler_Name.Data());

	Int_t PS[8]; gGet_PS(RunNo, PS);
	cout<<"--- PreScale Factor = ";
	for(unsigned int i=0;i<8;i++) 
		cout<<Form(" %d (T%d), ",PS[i], i+1); 
	cout<<endl;

	TString DAQ_Cut = "";
	Double_t LiveTime[8], LT_Err[8];
	Int_t err = -100;
	for(unsigned int i=0; i<8;i++){
		Int_t Trigger = i+1; //1~8
		Trigger_Name.ReplaceAll("_N_", Form("%d", Trigger));//eg., LefT_N_, to LeftT1
		DAQ_Cut = Form("(%s.evtypebits&(1<<%d))>0", Decoder_Name.Data(), Trigger);
		err= gCal_LiveTime_Avg(T_Tree,S_Tree,DAQ_Cut.Data(),Trigger_Name.Data(),PS[i],&LiveTime[i],&LT_Err[i]); 
		Double_t DT = 1.0 - LiveTime[i];
		Double_t DT_Err = DT * LT_Err[i]/LiveTime[i];
		if((Arm=="L" && (Trigger==1||Trigger==2||Trigger==3||Trigger==8))
				||(Arm=="R" && (Trigger==3||Trigger==4||Trigger==5||Trigger==8))){
			if(err>=0)
				cout<<Form("^ T%d:  Dead-Time = %4.2f +/- %4.2f", Trigger, DT, DT_Err)<<endl;
			else    
				cout<<Form("* T%d:  **Error**, Fail to calculate the Dead-Time!", Trigger)<<endl;
		}
	}


}/*}}}*/
