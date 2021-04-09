////////////////////////////////////////////////
// Generate Cross Section Look-up Table
//  --Zhihong Ye, 07/03/2012
//
// 10/02/2012, Change
////////////////////////////////////////////////
/*Include{{{*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <errno.h>
#include <sstream>
//#include <iterator>
//from root
#include <TMath.h>
#include <TRandom3.h>
#include <TLorentzVector.h>
#include <TMatrix.h>
#include <TFile.h>
#include <TTree.h>
#include <TStopwatch.h>
/*}}}*/
using namespace::std;
using namespace::TMath;
#include "XEMC.h"

//void GenXS(){
int main(){
	Double_t E0 = 4.4;
	Double_t Ep=4.0;   //GeV
	Double_t Ep_Min = 3.6, Ep_Max=4.2;   //GeV
	Double_t Theta = 17.5;
	Double_t Theta_Min = 11.5, Theta_Max=20.5;   //GeV
	Int_t A=3; 
	Int_t Z=2;

	TString Table_File = Form("XS_CLAS.table");
	TString Target_Input = Form("./input/He3_Input.dat");	
	ofstream outfile; outfile.open(Table_File.Data());
	/*Gen_XS_Table{{{*/
	XEMC* Event = new XEMC(); 
	Event->Init(Target_Input.Data());
	Int_t err = -1;
	int Bin_Mom = 100;
	//double Step = (Ep_Max-Ep_Min)/Bin_Mom;
	double Step = (Theta_Max-Theta_Min)/Bin_Mom;
	Double_t mom,theta,xbj,Q2, cs_born;

	outfile << Form("%10s %10s %10s %10s %10s %16s", "E0", "Ep","Theta","Q2", "xbj","XS_Born")<<endl;
	for(int i=0;  i<Bin_Mom+1; i++){
        mom = Ep;
        theta = Theta_Min + i*Step;
		Q2 = 4.0*E0*mom*pow(sin(theta/180.*3.1415926/2.0),2);
		xbj = Q2/(2.0*0.938272*(E0-mom));
		err = Event->Process(E0,mom,theta,A,Z,0.0);	
		if(err>=0){
			cs_born = Event->XS_Born();
			outfile << Form("%10.7f %10.7f %10.7f %10.7f %10.7f %16.6e", E0,mom,theta,Q2,xbj,cs_born)<<endl;
		}
	}
	delete Event;
	outfile.close();
	/*}}}*/

	return 0;
}

