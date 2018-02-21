/*inline vector<TString> Tokens(TString aline,TString aDelim=" "){{{*/
inline vector<TString> Tokens(TString aline,TString aDelim=",")
{
	Int_t i;
	TObjArray* InObjArray;
	TObjString* os;
	TString s;
	vector<TString> OutStringVec;
	OutStringVec.clear();

	InObjArray=aline.Tokenize(aDelim);
	for ( i=0; i<InObjArray->GetEntriesFast(); i++ )
	{
		os=(TObjString*)InObjArray->At(i);
		s=os->GetString();
		OutStringVec.push_back(s);
	}
	return OutStringVec;
}
/*}}}*/

/*inline vector<Int_t> gGet_RunNoChain(const TString& aString){{{*/
inline vector<Int_t> gGet_RunNoChain(const TString& aString)
{
	vector<Int_t> output;
	vector<TString> input=Tokens(aString,",");
	unsigned int i;
	for ( i=0; i<input.size(); i++ )
	{
		if ( isdigit(*input[i].Data()) || input[i].BeginsWith("-") )
		{
			vector<TString> tmp=Tokens(input[i],'-');
			if ( tmp.size()<=2 )
			{
				// Int_t FirstRunNo;
				Int_t LastRunNo;
				Int_t thisrunno;
				size_t index=input[i].First('-');
				if ( index<input[i].Length() ){
					thisrunno=tmp[0].Atoi();
					LastRunNo=tmp[1].Atoi();
				}else{
					thisrunno=tmp[0].Atoi();
					LastRunNo=thisrunno;
				}
				if ( thisrunno>LastRunNo ){
					thisrunno ^= LastRunNo;
					LastRunNo ^= thisrunno;
					thisrunno ^= LastRunNo;
				}
				while ( thisrunno<=LastRunNo ){
                                    output.push_back(thisrunno);
                                    thisrunno++;
				}
			}
		}
	}
	for ( i=0; i<output.size(); i++ )
	{
		if ( i==0 && output.size()>1 ){
			cerr<<"      RunNoChain is "<<output[i];
		}
		else if ( i==0 && i==(output.size()-1) ){
			cerr<<"      RunNoChain is "<<output[i]<<endl;
		}
		else if ( i==(output.size()-1) ){
			cerr<<" "<<output[i]<<endl;
		}
		else{
			cerr<<" "<<output[i];
		}
	}
	return output;
}
/*}}}*/

const TString ROOTFILES_DIR = "/chafs1/work1/tritium/Rootfiles/";
//const TString ROOTFILES_DIR = "./Tritium_Rootfiles/";
const TString ROOTFILES_NAME = "tritium";

/*inline TChain* gGetTree(const vector<Int_t>& aRunNoChain,TString aTreeName="T"){{{*/
inline TChain* gGetTree(const vector<Int_t>& aRunNoChain, TString aTreeName="T")
{
	TChain* Tree=new TChain(aTreeName.Data(),"Main Tree");
	for ( unsigned int i=0; i<aRunNoChain.size(); i++ )
	{
		Int_t aRunNo=aRunNoChain[i];
		Int_t index=0;
		TString File_Form=Form("%s_%d.root",ROOTFILES_NAME.Data(),aRunNo);
		if ( gSystem->FindFile(ROOTFILES_DIR.Data(),File_Form) )
		{
			cerr<<Form("      %s->Add(%s/%s_%d.root)",aTreeName.Data(),ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo)<<endl;
			Tree->Add(Form("%s/%s_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo));
		}
		else
			return 0;
		index++;
		File_Form=Form("%s_%d_%d.root",ROOTFILES_NAME.Data(),aRunNo,index);
		while ( gSystem->FindFile(ROOTFILES_DIR.Data(),File_Form) )
		{
			cerr<<Form("         Add %s/%s_%d_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo,index)<<endl;
			Tree->Add(Form("%s/%s_%d_%d.root",ROOTFILES_DIR.Data(),ROOTFILES_NAME.Data(),aRunNo,index));
			index++;
			File_Form=Form("%s_%d_%d.root",ROOTFILES_NAME.Data(),aRunNo,index);
		}
		Tree->LoadTree(0);
	}
	return Tree;
}
/*}}}*/


