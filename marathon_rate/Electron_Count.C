////////////////////////////////////////////////////////////////////////
// MARATHON Good-Electrons Countor
//  -- Zhihong Ye
//
//Note: If you change anything, please update bellow on what you did;
//      Highly recommend to ask Zhihong to add or change features.
//
//  * Updated on 02/05/2018 03:58PM by Zhihong
//     Add few more lines for ultra-long run-list what can go out of screen
//
////////////////////////////////////////////////////////////////////////

#include "TRI_Main.h"
#include "TRI_Tools.h"
const double TG_Theta_Max = 0.04;//40mrad
const double TG_Theta_Min =-0.04;//40mrad
const double TG_Phi_Max = 0.030;//25mrad
const double TG_Phi_Min =-0.030;//25mrad
const double TG_Dp_Max = 0.04;//4%mrad
const double TG_Dp_Min =-0.04;//4%mrad
const double TG_VZ_Max = 0.100;//4%mrad
const double TG_VZ_Min =-0.100;//4%mrad
const double P0 = 3.100; //GeV/c
const double GC_Cut = 2000.;
const double EP_Cut = 0.80;
const double EC2_Cut = 300; //L.prl2.e, R.sh.e
const int Main_Trigger_Left = 2;
const int Main_Trigger_Right = 5;

//void Electron_Count(){
void Electron_Count(TString aInputFileName=""){
	const double xB[16] = {0.218, 0.258, 0.298, 0.338, 0.378, 0.418, 0.458, 0.498, 0.538, 0.578, 0.618, 0.658, 0.698,0.738, 0.778, 0.818 };
	//TString aInputFileName="";
	if(aInputFileName==""){
		cout<<" --- Input File = ";cin >> aInputFileName;
	}
	aInputFileName = "./Runlist/"+aInputFileName;

	/*Read InputFile{{{*/
	//TString aInputFileName = ""; cout<<"--- Input File Name : "; cin >> aInputFileName;
	// int kin = 0; cout<<"--- Kin (1 or 2 or 3 ...) : "; cin >> kin;
	cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
	Int_t aline=0;
	const TString Target=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << Target<<endl; 
	const int kin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", kin)<<endl; 
	TString Kin = Form("Kin%d", kin);
	if(kin<=7)
		ROOTFILES_DIR = "/volatile/halla/triton/Tritium_Rootfiles/";

	TString Run_String = gGet_InputFile_Var(aInputFileName,aline);
	const vector<Int_t> RunNoChain=gGet_RunNoChain(Run_String);aline++;
	const int NumberOfRun = RunNoChain.size();
	cout << "   Run-List = " ;//<< Run_String<<endl;
	for(int i=0;i<NumberOfRun;i++)
		cout<<RunNoChain[i]<<" ";
	cout<<endl;
	/*}}}*/

	TString Arm="";// = gGet_InputFile_Var(aInputFileName,aline);aline++; 
	if(RunNoChain[0]>50000)
		Arm = "R";
	else
		Arm = "L";

	TChain* T_Tree =(TChain*) gGetTree(RunNoChain, "T");

	TString cut_L = Form("DL.evtypebits>>%d&1",Main_Trigger_Left);
	TString cut_e_L = Form("DL.evtypebits>>%d&1 && L.tr.n==1 && L.cer.asum_c>%4.1f && (L.prl1.e+L.prl2.e)/(L.gold.p*1000.)>%3.2f && (L.prl2.e)>%3.2f && (rpl.z)>%4.3f && (rpl.z)<%4.3f && (L.tr.tg_ph)>%4.3f && (L.tr.tg_ph)<%4.3f && (L.tr.tg_th)>%4.3f && (L.tr.tg_th)<%4.3f && (L.tr.tg_dp)>%4.3f && (L.tr.tg_dp)<%4.3f && evLeftdnew_r>5e4",Main_Trigger_Left, GC_Cut, EP_Cut, EC2_Cut, TG_VZ_Min, TG_VZ_Max,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);

	TString cut_R = Form("DR.evtypebits>>%d&1",Main_Trigger_Right);
	TString cut_e_R = Form("DR.evtypebits>>%d&1 && R.tr.n==1 && R.cer.asum_c>%4.1f && (R.ps.e+R.sh.e)/(R.gold.p*1000.)>%3.2f && (R.sh.e)>%3.2f && (rpr.z)>%4.3f && (rpr.z)<%4.3f && (R.gold.ph)>%4.3f && (R.gold.ph)<%4.3f && (R.gold.th)>%4.3f && (R.gold.th)<%4.3f && (R.gold.dp)>%4.3f && (R.gold.dp)<%4.3f && evRightdnew_r>5e4",Main_Trigger_Right, GC_Cut, 0.6, EC2_Cut, TG_VZ_Min, TG_VZ_Max,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);

	TString cut = "", cut_e="";
	int Main_Trigger = 0;
	if(Arm=="L"){
		cut = cut_L;
		cut_e = cut_e_L;
		Main_Trigger = Main_Trigger_Left;
	}else if(Arm=="R"){
		cut = cut_R;
		cut_e = cut_e_R;
		Main_Trigger = Main_Trigger_Right;
	}

	cout<<"--- Good Electron Cut: "<< cut_e<<endl;
	int Total_Ele= T_Tree->GetEntries(TCut(cut));
	int Good_Ele= T_Tree->GetEntries(TCut(cut_e));
	cout<<endl; 
	cout<<Form("--- For %s at %s on HRS-%s:  ", Target.Data(), Kin.Data(), Arm.Data())<<endl;
	cout<<"--- Total Good Electrons from these runs are = "<<Good_Ele<<endl;

	gStyle->SetOptStat(0);
	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	TH1F *h1 = new TH1F("h1","",200, -0.2,0.2);
	h1->SetXTitle("ReactZ (m)");
	if(Arm=="L"){
		T_Tree->Draw("rpl.z>>h1",TCut(cut_L));
		T_Tree->SetLineColor(2);
		T_Tree->Draw("rpl.z",TCut(cut_e_L),"same");
	}
	if(Arm=="R"){
		T_Tree->Draw("rpr.z>>h1",TCut(cut_R));
		T_Tree->SetLineColor(2);
		T_Tree->Draw("rpr.z",TCut(cut_e_R),"same");
	}
        Int_t max = h1->GetMaximum();
        h1->GetYaxis()->SetRangeUser(0, max*1.1);

	TLatex *t1 = new TLatex();
	t1->SetNDC();
	t1->SetTextFont(32);
	t1->SetTextSize(0.06);
	t1->SetTextColor(1); 
	t1->DrawLatex(0.15, 0.91, Form("Target = %s at %s (x=%4.3f) on HRS-%s ",Target.Data(), Kin.Data(),xB[kin-1], Arm.Data() ));

	t1->SetTextColor(4); 
	t1->SetTextSize(0.04);
	t1->DrawLatex(0.15, 0.85, Form("Total Good Electrons = %4.1fK (Total %4.1fK T%d Events) ", (Good_Ele/1000.), (Total_Ele/1000.), Main_Trigger));

	t1->SetTextColor(6); 
	t1->SetTextSize(0.03);
	//t1->DrawLatex(0.20, 0.52, Form("Run-List = %s",Run_String.Data() ));
	TString RUNLIST="Run-List = ";
	for(int j=0;j<std::min(NumberOfRun,10);j++)
		RUNLIST +=Form("%d ",RunNoChain[j]);
	t1->DrawLatex(0.20, 0.80, Form("%s",RUNLIST.Data() ));
	for(int k=1; k<20;k++){ //20 lines, add more lines if needed, but when there are too many, reduce the font-size and line-distance
		if(NumberOfRun>10*k){
			TString RUNLIST0="                   ";
			for(int j=10*k;j<std::min(NumberOfRun,10*(k+1));j++)
				RUNLIST0+=Form("%d ",RunNoChain[j]);
			t1->DrawLatex(0.20, 0.80-0.05*k, Form("%s",RUNLIST0.Data() ));
		}
	}

	c1->Print(Form("good_ele/%s_%s_%s_%d_T%d_TripCut.png", Target.Data(),Kin.Data(),Arm.Data(), RunNoChain[0],Main_Trigger));
	c1->Print(Form("good_ele/%s_%s_%s_%d_T%d_TripCut.pdf", Target.Data(),Kin.Data(),Arm.Data(), RunNoChain[0],Main_Trigger));
}
