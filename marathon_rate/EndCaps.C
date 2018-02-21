#include "TRI_Main.h"
#include "TRI_Tools.h"
const double TG_Theta_Max = 0.040;//40mrad
const double TG_Theta_Min =-0.040;//40mrad
const double TG_Phi_Max = 0.030;//25mrad
const double TG_Phi_Min =-0.030;//25mrad
const double TG_Dp_Max = 0.040;//4%mrad
const double TG_Dp_Min =-0.040;//4%mrad
const double TG_VZ_Max = 0.100;//4%mrad
const double TG_VZ_Min =-0.100;//4%mrad
const double P0 = 3.100; //GeV/c
const double GC_Cut = 2000.;
const double EP_Cut = 0.80;
const double EC2_Cut = 300.; //L.prl2.e, R.sh.e

const double Endcap_Cor_H1 = 1.203;
const double Endcap_Cor_D2 = 0.955;
const double Endcap_Cor_H3 = 1.118;
const double Endcap_Cor_He3 = 0.996;
const double Endcap_Cor_DM = 0.151/0.6992;

void EndCups()
{
	const double xB[16] = {0.218, 0.258, 0.298, 0.338, 0.378, 0.418, 0.458, 0.498, 0.538, 0.578, 0.618, 0.658, 0.698,0.738, 0.778, 0.818 };
	const double Theta0[16] = {17.58,19.14,20.58,21.93,23.21,24.43,25.59,26.70,27.77,28.81,29.81,30.79,31.73,32.65,33.55,36.12 };

	int kin = 0; cout<<"--- Kin (1 or 2 or 3 ...) : "; cin >> kin;
	TString Kin = Form("Kin%d", kin); 
	TString Arm="";cout<<"--- Arm (R or L): "; cin>>Arm;

	const int VZCut = int(TG_VZ_Max * 100.0); //cm, 8cm or 10cm
	TString aInputFileName="";
	TString aTarget = "", aKin="", aRun_String="";
	int akin=0; 
	Int_t aline=0;

        if(kin<=13)
		ROOTFILES_DIR = "/volatile/halla/triton/Tritium_Rootfiles/";
	/*Read Empty InputFile{{{*/
	aInputFileName = Form("./Runlist/DM_kin%d.dat", kin);
	//aInputFileName = Form("./Runlist/DM_kin%d.dat", kin);
	if(kin>=13)
		aInputFileName = Form("./Runlist/DM_kin%d.dat", kin);

	cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
	aline=0;
	aTarget=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << aTarget<<endl; 
	akin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", akin)<<endl; 
	if(akin!=kin){
		cerr<<"*** ERROR, from Empty, wrong Kinematics!!!! "<<endl;
		return;
	}	
	aRun_String = gGet_InputFile_Var(aInputFileName,aline);
	const vector<Int_t> RunNO_MT=gGet_RunNoChain(aRun_String);aline++;
	const int NumberOfRun_MT = RunNO_MT.size();
	cout << "   Empty Run-List = " ;//<< Run_String<<endl;
	for(int i=0;i<NumberOfRun_MT;i++)
		cout<<RunNO_MT[i]<<" ";
	cout<<endl;
	/*}}}*/

	/*Read H1 InputFile{{{*/
	vector<Int_t> RunNO_H1;
	int NumberOfRun_H1 = 0;
	if(kin<=3){
		aInputFileName = Form("./Runlist/H1_kin%d.dat", kin);
		cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
		aline=0;
		aTarget=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << aTarget<<endl; 
		akin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", akin)<<endl; 
		if(akin!=kin){
			cerr<<"*** ERROR, from H1, wrong Kinematics!!!! "<<endl;
			return;
		}	
		aRun_String = gGet_InputFile_Var(aInputFileName,aline);
		RunNO_H1=gGet_RunNoChain(aRun_String);aline++;
		NumberOfRun_H1 = RunNO_H1.size();
		cout << "   H1 Run-List = " ;//<< Run_String<<endl;
		for(int i=0;i<NumberOfRun_H1;i++)
			cout<<RunNO_H1[i]<<" ";
		cout<<endl;
	}
	/*}}}*/

	/*Read D2 InputFile{{{*/
	aInputFileName = Form("./Runlist/D2_kin%d.dat", kin);
	cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
	aline=0;
	aTarget=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << aTarget<<endl; 
	akin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", akin)<<endl; 
	if(akin!=kin){
		cerr<<"*** ERROR, from D2, wrong Kinematics!!!! "<<endl;
		return;
	}	
	aRun_String = gGet_InputFile_Var(aInputFileName,aline);
	const vector<Int_t> RunNO_D2=gGet_RunNoChain(aRun_String);aline++;
	const int NumberOfRun_D2 = RunNO_D2.size();
	cout << "   D2 Run-List = " ;//<< Run_String<<endl;
	for(int i=0;i<NumberOfRun_D2;i++)
		cout<<RunNO_D2[i]<<" ";
	cout<<endl;
	/*}}}*/

	/*Read H3 InputFile{{{*/
	aInputFileName = Form("./Runlist/H3_kin%d.dat", kin);
	cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
	aline=0;
	aTarget=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << aTarget<<endl; 
	akin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", akin)<<endl; 
	if(akin!=kin){
		cerr<<"*** ERROR, from H3, wrong Kinematics!!!! "<<endl;
		return;
	}	
	aRun_String = gGet_InputFile_Var(aInputFileName,aline);
	const vector<Int_t> RunNO_H3=gGet_RunNoChain(aRun_String);aline++;
	const int NumberOfRun_H3 = RunNO_H3.size();
	cout << "   H3 Run-List = " ;//<< Run_String<<endl;
	for(int i=0;i<NumberOfRun_H3;i++)
		cout<<RunNO_H3[i]<<" ";
	cout<<endl;
	/*}}}*/

	/*Read He3 InputFile{{{*/
	aInputFileName = Form("./Runlist/He3_kin%d.dat", kin);
	cout   << endl << Form("@@@@@@ Initialize Input values from %s ...",aInputFileName.Data())<<endl;
	aline=0;
	aTarget=gGet_InputFile_Var(aInputFileName,aline);aline++; cout << "   Target Name = " << aTarget<<endl; 
	akin=gGet_InputFile_Var(aInputFileName,aline).Atoi();aline++;                cout << Form("   Kin = Kin%d ", akin)<<endl; 
	if(akin!=kin){
		cerr<<"*** ERROR, from He3, wrong Kinematics!!!! "<<endl;
		return;
	}	
	aRun_String = gGet_InputFile_Var(aInputFileName,aline);
	const vector<Int_t> RunNO_He3=gGet_RunNoChain(aRun_String);aline++;
	const int NumberOfRun_He3 = RunNO_He3.size();
	cout << "   He3 Run-List = " ;//<< Run_String<<endl;
	for(int i=0;i<NumberOfRun_He3;i++)
		cout<<RunNO_He3[i]<<" ";
	cout<<endl;
	/*}}}*/

	TChain* T0 =(TChain*) gGetTree(RunNO_MT, "T");
	TChain* T1 ;
	if(kin<=3) T1=(TChain*) gGetTree(RunNO_H1, "T");
	TChain* T2 =(TChain*) gGetTree(RunNO_D2, "T");
	TChain* T3 =(TChain*) gGetTree(RunNO_H3, "T");
	TChain* T4 =(TChain*) gGetTree(RunNO_He3, "T");

	TH1F* h0 = new TH1F("h0","Empty Target",200,-0.20,0.20);
	h0->SetXTitle("rpl.z");
	TH1F* h01 = new TH1F("h01","Empty Target",200,-0.20,0.20);
	h01->SetXTitle("rpl.z");
	TH1F* h02 = new TH1F("h02","Empty Target",200,-0.20,0.20);
	h02->SetXTitle("rpl.z");
	
	TH1F* h1 = new TH1F("h1","H1 Target",200,-0.20,0.20);
	h1->SetXTitle("rpl.z");
	TH1F* h11 = new TH1F("h11","H1 Target",200,-0.20,0.20);
	h11->SetXTitle("rpl.z");
	TH1F* h12 = new TH1F("h12","H1 Target",200,-0.20,0.20);
	h12->SetXTitle("rpl.z");

	TH1F* h2 = new TH1F("h2","D2 Target",200,-0.20,0.20);
	h2->SetXTitle("rpl.z");
	TH1F* h21 = new TH1F("h21","D2 Target",200,-0.20,0.20);
	h21->SetXTitle("rpl.z");
	TH1F* h22 = new TH1F("h22","D2 Target",200,-0.20,0.20);
	h22->SetXTitle("rpl.z");

	TH1F* h3 = new TH1F("h3","H3 Target",200,-0.20,0.20);
	h2->SetXTitle("rpl.z");
	TH1F* h31 = new TH1F("h31","H3 Target",200,-0.20,0.20);
	h31->SetXTitle("rpl.z");
	TH1F* h32 = new TH1F("h32","H3 Target",200,-0.20,0.20);
	h32->SetXTitle("rpl.z");

	TH1F* h4 = new TH1F("h4","He3 Target",200,-0.20,0.20);
	h4->SetXTitle("rpl.z");
	TH1F* h41 = new TH1F("h41","He3 Target",200,-0.20,0.20);
	h41->SetXTitle("rpl.z");
	TH1F* h42 = new TH1F("h42","He3 Target",200,-0.20,0.20);
	h42->SetXTitle("rpl.z");

        /*Define Cuts{{{*/
	TString cut_e_L0 = Form("DL.evtypebits>>2&1 && L.tr.n==1 && L.cer.asum_c>%4.1f && (L.prl1.e+L.prl2.e)/(L.gold.p*1000.)>%3.2f && (L.prl2.e)>%3.2f && (rpl.z)>%4.3f && (rpl.z)<%4.3f && (L.tr.tg_ph)>%4.3f && (L.tr.tg_ph)<%4.3f && (L.tr.tg_th)>%4.3f && (L.tr.tg_th)<%4.3f && (L.tr.tg_dp)>%4.3f && (L.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut, -0.18, 0.18,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);
	TString cut_e_L1 = Form("DL.evtypebits>>2&1 && L.tr.n==1 && L.cer.asum_c>%4.1f && (L.prl1.e+L.prl2.e)/(L.gold.p*1000.)>%3.2f && (L.prl2.e)>%3.2f && (rpl.z)>%4.3f && (rpl.z)<%4.3f && (L.tr.tg_ph)>%4.3f && (L.tr.tg_ph)<%4.3f && (L.tr.tg_th)>%4.3f && (L.tr.tg_th)<%4.3f && (L.tr.tg_dp)>%4.3f && (L.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut,TG_VZ_Min,TG_VZ_Max,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);
	TString cut_e_L2 = Form("DL.evtypebits>>2&1 && L.tr.n==1 && L.cer.asum_c>%4.1f && (L.prl1.e+L.prl2.e)/(L.gold.p*1000.)>%3.2f && (L.prl2.e)>%3.2f && (rpl.z)>%4.3f && (rpl.z)<%4.3f && (L.tr.tg_ph)>%4.3f && (L.tr.tg_ph)<%4.3f && (L.tr.tg_th)>%4.3f && (L.tr.tg_th)<%4.3f && (L.tr.tg_dp)>%4.3f && (L.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut,0.0,0.18,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);
	
	TString cut_e_R0 = Form("DR.evtypebits>>5&1 && R.tr.n==1 && R.cer.asum_c>%4.1f && (R.ps.e+R.sh.e)/(R.gold.p*1000.)>%3.2f && (R.sh.e)>%3.2f && (rpr.z)>%4.3f && (rpr.z)<%4.3f && (R.tr.tg_ph)>%4.3f && (R.tr.tg_ph)<%4.3f && (R.tr.tg_th)>%4.3f && (R.tr.tg_th)<%4.3f && (R.tr.tg_dp)>%4.3f && (R.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut, -0.18, 0.18,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);
	TString cut_e_R1 = Form("DR.evtypebits>>5&1 && R.tr.n==1 && R.cer.asum_c>%4.1f && (R.ps.e+R.sh.e)/(R.gold.p*1000.)>%3.2f && (R.sh.e)>%3.2f && (rpr.z)>%4.3f && (rpr.z)<%4.3f && (R.tr.tg_ph)>%4.3f && (R.tr.tg_ph)<%4.3f && (R.tr.tg_th)>%4.3f && (R.tr.tg_th)<%4.3f && (R.tr.tg_dp)>%4.3f && (R.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut, TG_VZ_Min, TG_VZ_Max,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);
	TString cut_e_R2 = Form("DR.evtypebits>>5&1 && R.tr.n==1 && R.cer.asum_c>%4.1f && (R.ps.e+R.sh.e)/(R.gold.p*1000.)>%3.2f && (R.sh.e)>%3.2f && (rpr.z)>%4.3f && (rpr.z)<%4.3f && (R.tr.tg_ph)>%4.3f && (R.tr.tg_ph)<%4.3f && (R.tr.tg_th)>%4.3f && (R.tr.tg_th)<%4.3f && (R.tr.tg_dp)>%4.3f && (R.tr.tg_dp)<%4.3f", GC_Cut, EP_Cut, EC2_Cut, 0., 0.18,TG_Phi_Min, TG_Phi_Max, TG_Theta_Min, TG_Theta_Max, TG_Dp_Min, TG_Dp_Max);

	TString cut0 = "", cut1="", cut2="";
	TString RPZ = ""; 
	if(Arm=="L"){
		cut0= cut_e_L0;
		cut1= cut_e_L1;
		cut2= cut_e_L2;
                RPZ = "rpl.z";
	}else if(Arm=="R"){
		cut0= cut_e_R0;
		cut1= cut_e_R1;
		cut2= cut_e_R2;
                RPZ = "rpr.z";
	}
	/*}}}*/

	TCanvas *c1 = new TCanvas("c1","c1", 800,600);
	T0->Draw(Form("%s>>h0",RPZ.Data() ),TCut(cut0));
	h0->SetLineColor(1);
	T0->Draw(Form("%s>>h01",RPZ.Data() ),TCut(cut1));
	h01->SetLineColor(1);
	T0->Draw(Form("%s>>h02",RPZ.Data() ),TCut(cut2));
	h02->SetLineColor(1);
	if(aTarget=="DM"){
		h0->Scale(Endcap_Cor_DM);
		h01->Scale(Endcap_Cor_DM);
		h02->Scale(Endcap_Cor_DM);
	}

	TCanvas *c2 = new TCanvas("c2","c2", 800,600);
	c2->Divide(2,2);
	c2->cd(1);
	if(kin<=3){
		T1->Draw(Form("%s>>h1",RPZ.Data() ),TCut(cut0));
		h1->SetLineColor(8);
		T1->Draw(Form("%s>>h11",RPZ.Data() ),TCut(cut1));
		h11->SetLineColor(8);
		T1->Draw(Form("%s>>h12",RPZ.Data() ),TCut(cut2));
		h12->SetLineColor(8);
		h1->Scale(Endcap_Cor_H1);
		h11->Scale(Endcap_Cor_H1);
		h12->Scale(Endcap_Cor_H1);
	}

	c2->cd(2);
	T2->Draw(Form("%s>>h2",RPZ.Data() ),TCut(cut0));
	h2->SetLineColor(2);
	T2->Draw(Form("%s>>h21",RPZ.Data() ),TCut(cut1));
	h21->SetLineColor(2);
	T2->Draw(Form("%s>>h22",RPZ.Data() ),TCut(cut2));
	h22->SetLineColor(2);
	h2->Scale(Endcap_Cor_D2);
	h21->Scale(Endcap_Cor_D2);
	h22->Scale(Endcap_Cor_D2);

	c2->cd(3);
	T3->Draw(Form("%s>>h3",RPZ.Data() ),TCut(cut0));
	h3->SetLineColor(4);
	T3->Draw(Form("%s>>h31",RPZ.Data() ),TCut(cut1));
	h31->SetLineColor(4);
	T3->Draw(Form("%s>>h32",RPZ.Data() ),TCut(cut2));
	h32->SetLineColor(4);
	h3->Scale(Endcap_Cor_H3);
	h31->Scale(Endcap_Cor_H3);
	h32->Scale(Endcap_Cor_H3);

	c2->cd(4);
	T4->Draw(Form("%s>>h4",RPZ.Data() ),TCut(cut0));
	h4->SetLineColor(6);
	T4->Draw(Form("%s>>h41",RPZ.Data() ),TCut(cut1));
	h41->SetLineColor(6);
	T4->Draw(Form("%s>>h42",RPZ.Data() ),TCut(cut2));
	h42->SetLineColor(6);
	h4->Scale(Endcap_Cor_He3);
	h41->Scale(Endcap_Cor_He3);
	h42->Scale(Endcap_Cor_He3);

	double N0 = h02->GetBinContent(h02->GetMaximumBin());
	double N2 = h22->GetBinContent(h22->GetMaximumBin());
	double N3 = h32->GetBinContent(h32->GetMaximumBin());
	double N4 = h42->GetBinContent(h42->GetMaximumBin());
	cerr<<Form("N(D2, H3, He3)=%e, %e, %e", N2/N0,N3/N0,N4/N0)<<endl;

	double N1 = -100000.0;
	double NT1= -100000.0;
	if(kin<=3){
		N1 = h12->GetBinContent(h12->GetMaximumBin());
		h1->Scale(N0/N1);
		h11->Scale(N0/N1);
		NT1 = h11->Integral();
	}
	
	h2->Scale(N0/N2);
	h3->Scale(N0/N3);
	h4->Scale(N0/N4);

	h21->Scale(N0/N2);
	h31->Scale(N0/N3);
	h41->Scale(N0/N4);

	double NT0 = h01->Integral();
	double NT2 = h21->Integral();
	double NT3 = h31->Integral();
	double NT4 = h41->Integral();

	cerr<<Form("Cont(D2, H3, He3) new=%3.2f, %3.2f, %3.2f",  NT0/ NT2*100.,  NT0/ NT3*100.,  NT0/ NT4*100.)<<endl;

	TCanvas *c3 = new TCanvas("c3","c3",800,600);
	gStyle->SetOptStat(0);
	gPad->SetLogy(1);
	h0->Draw();
	if(kin<=3) h1->Draw("HIST same");
	h2->Draw("HIST same");
	h3->Draw("HIST same");
	h4->Draw("HIST same");

	TLatex *t1 = new TLatex();
	t1->SetNDC();
	t1->SetTextFont(32);
	if(kin<=3){
		t1->SetTextColor(8); t1->DrawLatex(0.3, 0.66, Form("Empty/H1 = %2.1f %% #pm %2.1f %% ",
					NT0/NT1*100., sqrt( 1./NT0 + 1./NT1) *NT0/NT1*100. ));
	}
	t1->SetTextColor(2); t1->DrawLatex(0.3, 0.72, Form("Empty/D2 = %2.1f %% #pm %2.1f %% ", 
				NT0/NT2*100., sqrt( 1./NT0 + 1./NT2) *NT0/NT2*100. ));
	t1->SetTextColor(4); t1->DrawLatex(0.3, 0.78, Form("Empty/H3 = %2.1f %% #pm %2.1f %% ", 
				NT0/NT3*100., sqrt( 1./NT0 + 1./NT3) *NT0/NT3*100. ));
	t1->SetTextColor(6); t1->DrawLatex(0.3, 0.84, Form("Empty/He3 = %2.1f %% #pm %2.1f %% ",
				NT0/NT4*100., sqrt( 1./NT0 + 1./NT4) *NT0/NT4*100. ));

	t1->SetTextColor(7); t1->DrawLatex(0.3, 0.65, Form("|VertexZ|<%dcm", VZCut));
	t1->SetTextColor(7); t1->DrawLatex(0.3, 0.60, Form("%s, #theta = %4.2f", Kin.Data(), Theta0[kin-1]));

	c3->Print(Form("gas_vs_empty/%s_%d_VZ%d_DM.pdf",Kin.Data(),RunNO_MT[0], VZCut));
	c3->Print(Form("gas_vs_empty/%s_%d_VZ%d_DM.png",Kin.Data(),RunNO_MT[0], VZCut));
}
