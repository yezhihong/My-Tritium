#include <cstring>
#include <stdexcept>
#include <cassert>

#include "TTree.h"
#include "TFile.h"
#include "TString.h"

using namespace std;

void Rate_check(Int_t run_number=0)
{
  if(run_number==0){
     cout << "enter run_number: ";
     cin >> run_number;
   }

  TChain *T = new TChain("T");
  T->Add(Form("/chafs1/work1/tritium/Rootfiles/tritium_%d*.root",run_number));

  int RHRS=0,LHRS=0;
  if(run_number<20000)LHRS=1;
  else RHRS=1;

   const double dp_cut = 0.040;
   const double th_cut = 0.040;
   const double ph_cut = 0.030; 
   const double y_cut = 0.08;//0.02;

  TCut CK,EPcut,Trk1,GAS,trigger1,trigger2,acc;
  if(LHRS)
   {
     CK = "L.cer.asum_c>2000";
     EPcut = "(L.prl1.e+L.prl2.e)/(1000*L.tr.p[0])>0.7";
     Trk1 = "L.tr.n==1";
     GAS = Form("L.tr.vz>-%f && L.tr.vz<%f", y_cut, y_cut);
     trigger1 = "(DL.evtypebits>>1)&1";
     trigger2 = "(DL.evtypebits>>2)&1";
     acc = Form("abs(L.gold.dp)<%f && abs(L.gold.th)<%f && abs(L.gold.ph)<%f", dp_cut,th_cut,ph_cut);
   }
  if(RHRS)
   {
     CK = "R.cer.asum_c>2000";
     EPcut = "(R.ps.e+L.sh.e)/(1000*R.tr.p[0])>0.7";
     Trk1 = "R.tr.n==1";
     GAS = Form("R.tr.vz>-%f && R.tr.vz<%f", y_cut, y_cut);
     trigger1 = "(DL.evtypebits>>4)&1";
     trigger2 = "(DL.evtypebits>>5)&1";
     acc = Form("abs(R.gold.dp)<%f && abs(R.gold.th)<%f && abs(R.gold.ph)<%f", dp_cut,th_cut,ph_cut);
   }


   TCanvas *c1 = new TCanvas("c1","rate check");
   TH1F *ht3 = new TH1F("ht3","ytarget after cuts",1000,-0.1,0.1);
   ht3->GetXaxis()->SetTitle("y_target (m)");ht3->GetXaxis()->CenterTitle();
   ht3->GetYaxis()->SetTitle("good events counts");ht3->GetYaxis()->CenterTitle();
   TH1F *htt3 = new TH1F("htt3","ytarget after cuts",1000,-0.1,0.1);

   if(LHRS){
      //T->Draw("L.tr.tg_y>>ht3",CK+EPcut+Trk1+trigger2);
      T->Draw("L.tr.tg_y>>ht3", trigger2);
      T->Draw("L.tr.tg_y>>htt3",CK+EPcut+Trk1+GAS+trigger2+acc,"same");
   }
   if(RHRS){
      T->Draw("R.tr.tg_y>>ht3", trigger2);
      T->Draw("R.tr.tg_y>>htt3",CK+EPcut+Trk1+GAS+trigger2+acc,"same");
   }

   htt3->SetLineColor(kRed);
   htt3->Draw("same");

   TLatex *t = new TLatex();
    t->SetTextColor(kRed);
    t->SetTextSize(0.04);
    t->SetTextAlign(12);
    int i1=ht3->Integral();
    int i2=htt3->Integral();
    double i3 = 1.0*i2/(i1*1.0);
    gPad->SetLogy();
    t->DrawLatexNDC(0.2,0.85,Form("good events counts: %d/%d = %f",i2,i1,i3));
}
