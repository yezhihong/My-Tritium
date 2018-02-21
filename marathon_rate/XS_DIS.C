/*Include{{{*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>
#include <string.h>
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
#include <TString.h>
#include <TStopwatch.h>
#include <TRandom2.h>
/*}}}*/
/*Constants{{{*/
using namespace::std;
static const double PI=3.14159265358979323846;
static const double ALPHA=1/137.036; //fine-structure constant
static const double Deg2Rad = PI/180.0;
static const double Rad2Deg = 180.0/PI;
static const double MeV2GeV = 0.001;
static const double AP=ALPHA/PI;
static const double ELECTRON_MASS=0.510998918*MeV2GeV; //GeV
static const double NQe = 1.6*1e-19;
static const double Avogadro = 6.02*1e+23;
static const double M2=ELECTRON_MASS*ELECTRON_MASS*MeV2GeV; //GeV
static const double AMU=931.494043*MeV2GeV; //GeV
static const double PROTON_MASS=938.272029*MeV2GeV; //GeV
static const double DELTA_MASS=1232.*MeV2GeV; //GeV
static const double PI_MASS=139.57*MeV2GeV; //GeV
static const double HBARC=197.326968*MeV2GeV; //hbar*c GeV fm
static const double NBARN_TO_GEV2= 1./3.894 * 1e-5; //nbarn-->GeV^-2
static const double GEV2_TO_NBARN= 3.894 * 1e5; //GeV^-2-->nbarn
static const double NBARN_TO_CM2=1e-33; //nbarn-->CM^2
/*}}}*/
#include "christy_bosted_inelastic.h"
#include "DIS.h"

int main(){

    double E0 = 0; cout<<"--- E0 = "; cin >> E0;
    double Ep = 0; cout<<"--- Ep = "; cin >> Ep;
    double Theta = 0; cout<<"--- Theta = "; cin >> Theta;

    string Model = "F2ALLM";

    DIS* dis = new DIS();
    dis->SetModel(Model.c_str());
    dis->SetKin(E0, Ep, Theta*Deg2Rad);
    
    double sigma0_h1 = dis->Sigma(1,1);
    double sigma0_d2 = dis->Sigma(2,1);
    double sigma0_h3 = dis->Sigma(3,1);
    double sigma0_he3 = dis->Sigma(3,2);

    cout<<"--- XS_H1 = "<<sigma0_h1<<endl;
    cout<<"--- XS_D2 = "<<sigma0_d2<<endl;
    cout<<"--- XS_H3 = "<<sigma0_h3<<endl;
    cout<<"--- XS_He3 = "<<sigma0_he3<<endl;

}


