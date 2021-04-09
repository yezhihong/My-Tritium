    ////////////////////////////////////////////////
    // Generate Cross Section Look-up Table
    //  --Zhihong Ye, 07/03/2012
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
    
    char* gKin; 
    char* gTarget;
    int getargs(int argc, char**argv);
    
    int main(int argc,char** argv){
      
      int err = getargs(argc,argv);
      if(err>=0){
      TString Kin, Target;
      Kin = gKin;
      Target = gTarget;
      
      Double_t E0 = 3.356; //GeV
      Double_t Ep = 0.0;   //GeV
      Double_t Theta = 0.0; //Degree
      Int_t A=1; 
      Int_t Z=0;

      TString Target_Input = Form("./input/%s_Input.dat",Target.Data());	
      TString Table_File = Form("./XS_%s_Kin%s.table",Target.Data(), Kin.Data());
      //TString Table_File = Form("./%s/XS_%s_Kin%s.table",Target.Data(),Target.Data(), Kin.Data());

      /*Set Kin{{{*/
      if(Kin=="3.1")  {
              Ep = 2.905; Theta = 21.00; } 
      else if(Kin=="3.2") {   
              Ep = 3.055; Theta = 21.00; }
      else if(Kin=="4.1") {   
              Ep = 2.855; Theta = 23.00; }
      else if(Kin=="4.2") {   
              Ep = 3.035; Theta = 23.00; }
      else if(Kin=="5.0") {   
              Ep = 2.505; Theta = 25.00; }
      else if(Kin=="5.05") {   
              Ep = 2.650; Theta = 25.00; }
      else if(Kin=="5.1") {
              Ep = 2.795; Theta = 25.00; }
      else if(Kin=="5.2") {
              Ep = 2.995; Theta = 25.00; }
      else if(Kin=="6.5") {
              Ep = 2.845; Theta = 28.00; }
      else {
              cerr<< "I don't understand the Kinematics setting!"<<endl;}
      /*}}}*/

      /*Set Target{{{*/
      if(Target == "H2") {
              A = 2; Z = 1;}
      else if(Target == "He3") {
              A = 3; Z = 2;}
      else if(Target == "He4") {
              A = 4; Z = 2;}
      else if(Target == "C12") { 
              A = 12; Z = 6;}
      else if(Target == "Ca40") {
              A = 40; Z = 20;}
      else if(Target == "Ca48") {
              A = 48; Z = 20;}
      else if(Target == "Dummy") { 
              A = 27; Z = 13;}
      else{
          cerr<<"I don't understand the Target!"<<endl;}
      /*}}}*/

      /*Gen_XS_Table{{{*/
      //Define Acceptace Range and Bin-Size
      Double_t Delta_P = 0.07*Ep;          Int_t Bin_P = 200;       Double_t Size_P = Delta_P/Bin_P;
      Double_t Delta_Theta = 0.07*TMath::RadToDeg();      Int_t Bin_Theta = 200;   Double_t Size_Theta = Delta_Theta/Bin_Theta;
      
      //Define Output file name
      ofstream outfile(Table_File.Data());
      //outfile << Form("%6s %6s %5s %5s %6s %10s %10s %16s %16s", "T-Bin","P-Bin","A","Z","E0","Ep","Theta","xs_born","xs_rad")<<endl;
      outfile << Form("%5s %5s %6s %10s %10s %16s %16s", "A","Z","E0","Ep","Theta","xs_born","xs_rad")<<endl;

      //Define a event to calculate radiated cross section
      XEMC* Event = new XEMC(); 
      Event->Init(Target_Input.Data());
      Int_t err = -1;
      Double_t mom, theta, cs_rad,cs_born;
      for(int i=0;  i<Bin_Theta; i++){
              theta = Theta - Delta_Theta/2. + i * Size_Theta; 

              for(int j=0;  j<Bin_P;   j++){
                      mom = Ep - Delta_P/2. + j * Size_P;

                      err = Event->Process(E0,mom,theta,A,Z,0.0);	
                      if(err>=0){
                        cs_rad = Event->XS_Rad();
                        cs_born = Event->XS_Born();
                        //cerr << Form("%6d %6d %5d %5d %6.3f %10.7f %10.7f %16.6e %16.6e", i,j,A,Z,E0,mom,theta,cs_born,cs_rad)<<endl;
                        //outfile << Form("%6d %6d %5d %5d %6.3f %10.7f %10.7f %16.6e %16.6e", i,j,A,Z,E0,mom,theta,cs_born,cs_rad)<<endl;
                        cerr << Form("%5d %5d %6.3f %10.7f %10.7f %16.6e %16.6e", A,Z,E0,mom,theta,cs_born,cs_rad)<<endl;
                        outfile << Form("%5d %5d %6.3f %10.7f %10.7f %16.6e %16.6e", A,Z,E0,mom,theta,cs_born,cs_rad)<<endl;
                     }
              }
      } 
      delete Event;
      outfile.close();
      /*}}}*/

      cerr << Form("Cross Section Table for %s at Kin%s has been generated!",Target.Data(), Kin.Data())<<endl;
    
      }
      return 0;
    }

    
  /*int getargs(int argc,char** argv){{{*/
  int getargs(int argc,char** argv){
    char* argptr;
    bool noStop;  
    int err=-1;
    
    for(int i=0;i<argc;i++){
      argptr = argv[i];
      if(*argptr=='-'){
        argptr++;
        switch (*argptr){
          case 'K':
            if(*(++argptr))
              gKin = argptr;
            err=0;
            break;
          case 'T':
            if(*(++argptr))
              gTarget = argptr;
            err=0;
            break;
          case 'h':
              cerr <<"================================================"<<endl;
              cerr <<"Option: " <<endl;
              cerr <<"-K[3.1, 3.2, ...]  Kinematics Setting" <<endl;
              cerr <<"-T[H2,He3,He4,C12,Ca40,Ca48,...]  Target Name" <<endl;
              cerr <<endl<<"================================================"<<endl;
              noStop=false;
              err=-1;
              goto OUT;
              break;
          default:
              cerr <<"Unrecognized argument: " << argptr << endl;
              cerr <<endl<<"================================================"<<endl;
              cerr <<"Option: " <<endl;
              cerr <<"-K[3.1, 3.2, ...]  Kinematics Setting" <<endl;
              cerr <<"-T[H2,He3,He4,C12,Ca40,Ca48,...]  Target Name" <<endl;
              cerr <<"             Zhihong Ye 10/04/2009" <<endl;
              cerr <<"================================================"<<endl;
              err=-1;
              break;
        }
      
      }
      noStop=true;
      OUT:if(!noStop){break;}
      continue;
    }
    return err; 
  }
/**/
