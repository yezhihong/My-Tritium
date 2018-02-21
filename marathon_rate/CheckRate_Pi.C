#include "GetRate.h"
#include "christy_bosted_inelastic.h"
#include "DIS.h"
const double WISER_Factor = 0.5;
const double Corr_Factor = 2./2.;

/*Call fortran codes{{{*/
extern "C"
{
    //Wiser-code for pion cross section calculation of a proton target
    //                   E0,    Ep    Theta  rad_len type, XS
    //                  GeV    GeV/c  Degree   %       2   (nb/GeV/sr)
    // type = 1->pi+, 2->pi-, 3->K+, 4->K-, 5=p, 6=p-bar
    void wiser_all_sig_(double*,double*, double*, double*, int*, double*);
}
/*}}}*/

double Get_Rad_Len(const int &kA, const int &kZ){/*{{{*/
    return 716.4 * kA / ( kZ * (kZ+1) * log(287./sqrt(kZ))  );
}/*}}}*/

/*GetRate{{{*/
void GetRate(const std::string spec, const std::string Model,  const std::string Com, double E0, double P0, double T0, const double I_Current, 
        double* xb_avg, double* W2_avg, double* xs_he3,double* xs_he3_avg,double* rate_he3, double* xs_h3,double* xs_h3_avg,double* rate_h3, double* xs_d2,double* xs_d2_avg,double* rate_d2,double *rate_window, double* rate_c12, double* rate_al, double *pi_e){
    bool IsDebug = false;
    //bool IsDebug = true;
    /*
       double E0 = 11.0; //GeV
       double P0; //GeV, Scattered Electrons' Central Momentum
       double T0; //Degree, Scattered Electrons' Central Angle
       std::string spec = "";
       cout<<" --- Which Spectrometer (HRS or BB) = "; cin >> spec;
       cout<<" --- Beam Energy (E0, GeV) = "; cin >> E0;
       cout<<" --- Scattered Electron's Central Momentum (P0, GeV) = "; cin >> P0;
       cout<<" --- Scattered Electron's Central Angle (Theta0, Deg) = "; cin >> T0;
       */
    int Nevnt = 2000000;
    if(IsDebug){cout<<" ----Total Samples = "; cin >> Nevnt;}
    cout<<endl<<endl;

    DIS* dis = new DIS();
    dis->SetModel(Model.c_str());
    dis->SetKin(E0, P0, T0*Deg2Rad);

    Event* evt = new Event();     
    evt->SetSpectrometer(spec);
    if(spec=="BB"){
        if(Com=="narrow")
            evt->SetTGDpRange(-0.045, 0.045);
        else{
            double pmin = (1.0  - P0)/P0;//BB's minimum momentum set to 1GeV
            double pmax = (11.0 - P0)/P0;//BB's maximum momentum set to 11GeV
            evt->SetTGDpRange(pmin, pmax);
        }	
    }	
    double Phase_Space = evt->GetPhaseSpace() * P0; //sr*GeV //it was deltaTheta * deltaPhi *deltaDp

    /*Define Target Info{{{*/
    double Beam_Current = 0.0;//A

    //Upstream Window:   0.010" x 0.069g/cm-2
    //Downstream Window: 0.011" x 0.075g/cm-2
    double Window_Length = 25.;//cm
    if(spec=="HRS")
        Window_Length = 15.0;//cm
    Beam_Current = I_Current*1e-6;//25uA
    const double Window_ArialDensity =  ( 0.069+0.075 );//g/cm-2, Al-2219 Alloy
    double Rad_Len_Window_Up = 0.069 / Get_Rad_Len(27, 13) *100.; //%
    double Rad_Len_Window_Dn = 0.075 / Get_Rad_Len(27, 13) *100.; //%
    double Rad_Len_Window = Rad_Len_Window_Up + Rad_Len_Window_Dn ; //%
    double Window_Lumi= Beam_Current/NQe * Window_ArialDensity*Avogadro/27;//cm-2*s-1
    double Target_Density = 0.0;//g*cm-3
    double Target_Thick = 0.0;//cm
    evt->SetVertexRange(-Target_Thick/2.0, Target_Thick/2.0);

    //D2 Target
    Beam_Current = I_Current*1e-6;//25uA
    Target_Thick = Window_Length;
    //Target_Density = 0.124/25.00;//gcm-3
    Target_Density = 0.142/25.00;//g*cm-3 //, 01/04/2018 values
    //double Rad_Len_D2 =  0.142*Target_Density / Get_Rad_Len(2, 1) *100.;
    double Rad_Len_D2 = 1.1218e-3 * 100.; //%
    double D2_Lumi= Beam_Current/NQe * Target_Thick*Target_Density*Avogadro/2;//cm-2*s-1
    double sigma0_d2 = dis->Sigma(2,1);

    //H3 Target
    Beam_Current = I_Current*1e-6;//25uA
    Target_Thick = Window_Length;
    //Target_Density = 0.081/25.00;//g*cm-3
    Target_Density = 0.077/25.00;//g*cm-3 //, 01/04/2018 values
    //double Rad_Len_H3 =  0.077 / Get_Rad_Len(3, 1) *100.;
    double Rad_Len_H3 = 4.0553e-4 * 100.;//%
    double H3_Lumi= Beam_Current/NQe * Target_Thick*Target_Density*Avogadro/3;//cm-2*s-1
    double sigma0_h3 = dis->Sigma(3,1);

    //He3 Target
    Beam_Current = I_Current*1e-6;//25uA
    Target_Thick = Window_Length;
    //Target_Density = 0.093/25.00;//g*cm-3
    Target_Density = 0.053/25.00;//g*cm-3 //, 01/04/2018 values
    //double Rad_Len_He3 =  0.053 / Get_Rad_Len(3, 2) *100.;
    double Rad_Len_He3 =  7.8611e-04 * 100.; //%
    double He3_Lumi= Beam_Current/NQe * Target_Thick*Target_Density*Avogadro/3;//cm-2*s-1
    double sigma0_he3 = dis->Sigma(3,2);

    //C12 Target
    Beam_Current = I_Current*1e-6;//25uA
    Target_Thick = 1.0;
    //Target_Density = 0.883/1.00;//g*cm-3 //, 01/04/2018 values
    Target_Density = 11*0.045/1.00;//g*cm-3 //, 01/04/2018 values
    double Rad_Len_C12 =  Target_Density*Target_Thick / Get_Rad_Len(12, 6) *100.;
    double C12_Lumi= Beam_Current/NQe * Target_Thick*Target_Density*Avogadro/12;//cm-2*s-1

    //Dummy Target
    Beam_Current = I_Current*1e-6;//25uA
    Target_Thick = 1.0;
    Target_Density = (0.349+0.349)/1.00;//g*cm-3 //, 01/04/2018 values
    double Rad_Len_AL =  Target_Density*Target_Thick / Get_Rad_Len(27, 13) *100.;
    double AL_Lumi= Beam_Current/NQe * Target_Thick*Target_Density*Avogadro/27;//cm-2*s-1

    xs_d2[0] = sigma0_d2;
    xs_h3[0] = sigma0_h3;
    xs_he3[0] = sigma0_he3;
  
    double RL=0.0, xs_temp=0.0;
    int type=2;//type=2 for pi-

    RL = 0.5 * Rad_Len_D2 + 5.0;
    wiser_all_sig_(&E0, &E0, &T0,       &RL, &type, &xs_temp); 
    xs_d2[1] = xs_temp;
    RL = 0.5 * Rad_Len_H3 + 5.0;
    wiser_all_sig_(&E0, &E0, &T0,&RL, &type, &xs_temp); 
    xs_h3[1] = xs_temp;
    RL = 0.5 * Rad_Len_He3 + 5.0;
    wiser_all_sig_(&E0, &E0, &T0,&RL, &type, &xs_temp); 
    xs_he3[1] = xs_temp;
    /*}}}*/
    //cout<<Form("E0=%f,Ep=%f,Angle=%f, RL=%f, %f, %f, %f", E0, Ep, Theta_Deg, Rad_Len_D2, Rad_Len_H3, Rad_Len_He3, Rad_Len_Window)<<endl;;

    const double CosA = cos( T0*Deg2Rad );
    const double SinA = sin( T0*Deg2Rad );
    double x_tg, y_tg, z_tg, dp_tg,theta_tg, phi_tg,Theta, Ep;
    double sigma_d2, sigma_h3, sigma_he3,sigma_c12,sigma_al,sigma_w; 
    double sigma_wiser_d2, sigma_wiser_h3, sigma_wiser_he3, sigma_wiser_c12, sigma_wiser_al, sigma_wiser_w;
    double xs_p,xs_n,xs_d;
    double xb,nu, Q2, W;   
    double D2_XS_Sum = 0.0,H3_XS_Sum = 0.0,He3_XS_Sum = 0.0;
    double Window_XS_Sum = 0.0, C12_XS_Sum=0.0, AL_XS_Sum=0.0;;
    double D2_XS_Sum_Wiser= 0.0, H3_XS_Sum_Wiser= 0.0, He3_XS_Sum_Wiser= 0.0;
    double Window_XS_Sum_Wiser= 0.0,  C12_XS_Sum_Wiser= 0.0, AL_XS_Sum_Wiser= 0.0;

    /*Define ROOT file and tree{{{*/
    //TString filename = Form("./results/%s_rate_marathon_%s_E%d_P%d_T%d.root", Model.c_str(),spec.c_str(), (int)(E0+0.5), (int)(P0+0.5), (int)(T0+0.5));
    //if(IsDebug)
        //filename = Form("./results/%s_rate_marathon_%s_E%d_P%d_T%d_debug.root", Model.c_str(),spec.c_str(), (int)(E0+0.5), (int)(P0+0.5), (int)(T0+0.5));
    //if(spec=="BB" &&Com=="narrow")	
        //filename = Form("./results/%s_rate_marathon_%s_E%d_P%d_T%d_narrow.root",Model.c_str(), spec.c_str(), (int)(E0+0.5), (int)(P0+0.5), (int)(T0+0.5));
    //TFile *file = new TFile(filename,"recreate");
    //TTree* T = new TTree("T","A New Tree");

    //T->Branch("x_tg",&x_tg, "x_tg/D");
    //T->Branch("y_tg",&x_tg, "y_tg/D");
    //T->Branch("z_tg",&z_tg, "z_tg/D");
    //T->Branch("dp_tg",&dp_tg, "dp_tg/D");
    //T->Branch("theta_tg",&theta_tg, "theta_tg/D");
    //T->Branch("phi_tg",&phi_tg, "phi_tg/D");

    //T->Branch("E0",&E0, "E0/D");
    //T->Branch("Ep",&Ep, "Ep/D");
    //T->Branch("Theta",&Theta, "Theta/D");
    //T->Branch("Q2",&Q2, "Q2/D");
    //T->Branch("W",&W, "W/D");
    //T->Branch("xb",&xb, "xb/D");
    //T->Branch("nu",&nu, "nu/D");

    //T->Branch("D2_Lumi",&D2_Lumi, "D2_Lumi/D");
    //T->Branch("H3_Lumi",&H3_Lumi, "H3_Lumi/D");
    //T->Branch("He3_Lumi",&He3_Lumi, "He3_Lumi/D");
    //T->Branch("C12_Lumi",&C12_Lumi, "C12_Lumi/D");
    //T->Branch("Window_Lumi",&Window_Lumi, "Window_Lumi/D");
    //T->Branch("AL_Lumi",&AL_Lumi, "AL_Lumi/D");

    //T->Branch("D2_XS_Sum",&D2_XS_Sum, "D2_XS_Sum/D");
    //T->Branch("H3_XS_Sum",&H3_XS_Sum, "H3_XS_Sum/D");
    //T->Branch("He3_XS_Sum",&He3_XS_Sum, "He3_XS_Sum/D");
    //T->Branch("C12_XS_Sum",&C12_XS_Sum, "C12_XS_Sum/D");
    //T->Branch("Window_XS_Sum",&Window_XS_Sum, "Window_XS_Sum/D");
    
    //T->Branch("xs_p",&xs_p, "xs_p/D");
    //T->Branch("xs_n",&xs_n, "xs_n/D");
    //T->Branch("xs_d",&xs_d, "xs_d/D");

    //T->Branch("sigma0_d2",&sigma0_d2, "sigma0_d2/D");
    //T->Branch("sigma_d2",&sigma_d2, "sigma_d2/D");
    //T->Branch("sigma0_h3",&sigma0_h3, "sigma0_h3/D");
    //T->Branch("sigma_he3",&sigma_he3, "sigma_he3/D");
    //T->Branch("sigma_c12",&sigma_c12, "sigma_c12/D");
    //T->Branch("sigma_al",&sigma_al, "sigma_al/D");
    //T->Branch("Phase_Space",&Phase_Space, "Phase_Space/D");
    //T->Branch("sigma_wiser_d2",&sigma_wiser_d2, "sigma_wiser_d2/D");
    //T->Branch("sigma_wiser_h3",&sigma_wiser_h3, "sigma_wiser_h3/D");
    //T->Branch("sigma_wiser_he3",&sigma_wiser_he3, "sigma_wiser_he3/D");
    //T->Branch("sigma_wiser_c12",&sigma_wiser_c12, "sigma_wiser_c12/D");
    //T->Branch("sigma_wiser_al",&sigma_wiser_al, "sigma_wiser_al/D");
    //T->Branch("sigma_wiser_w",&sigma_wiser_w, "sigma_wiser_w/D");
/*}}}*/

    /*Start sampling events{{{*/
    int Count=0,  Count1=0;  
    double xb_sum=0.0; double W2_sum=0.0;
    //randomly generate events within the spectrometer phase space and caluclate the XS
    for(int i=0; i<Nevnt; i++){
        xs_p = -1e-33; xs_n = -1e-33; xs_d = -1e-33; 

        x_tg = evt->GetTG_X(); //cm
        y_tg = evt->GetTG_Y(); //cm
        z_tg = evt->GetTG_Z(); //cm

        dp_tg = evt->GetTG_Dp();//GeV
        Ep = P0 * (1.0 + dp_tg);//GeV

        theta_tg = evt->GetTG_Theta(); //rad
        phi_tg = evt->GetTG_Phi(); //rad
        Theta = acos( (CosA-phi_tg*SinA) / sqrt(1.+theta_tg*theta_tg+phi_tg*phi_tg) );//rad

        nu = E0-Ep;
        Q2 = 4.0*E0*Ep*pow(sin(Theta/2.0),2);
        xb = Q2 / (2.0*PROTON_MASS*nu);
        W = sqrt( PROTON_MASS*PROTON_MASS + 2.0*PROTON_MASS*nu - Q2 );

        if(IsDebug)
            printf("^^^^ Ep=%8.5fGeV, Theta=%8.5fDeg, xb = %4.3f\n"
                    ,Ep,Theta/Deg2Rad, xb);

        sigma_d2 = 0;
        sigma_h3 = 0;
        sigma_he3 = 0;
        sigma_c12 = 0;
        sigma_w = 0;
        sigma_al = 0;
        sigma_wiser_d2 = 0;
        sigma_wiser_h3 = 0;
        sigma_wiser_he3 = 0;
        sigma_wiser_c12 = 0;
        sigma_wiser_w = 0;
        sigma_wiser_al = 0;
        /*Calculate the cross sections{{{*/
        if(xb<1.0){
            dis->SetKin(E0, Ep, Theta);
            xs_p = dis->Sigma("Proton");
            xs_n = dis->Sigma("Neutron");
            xs_d = dis->Sigma("Deutron");

            if(std::isnan(xs_p)||xs_p<-1e-20)
                xs_p=1e-66;
            if(std::isnan(xs_n)||xs_n<-1e-20)
                xs_n=1e-66;
            if(std::isnan(xs_d)||xs_d<-1e-20)
                xs_d=1e-66;

            if(IsDebug)
                printf("^^^^ XS_P = %10.4e, XS_N =  %10.4e\n", xs_p, xs_n);

            sigma_d2 = xs_d;
            sigma_h3 = xs_d+xs_n;
            sigma_he3 = xs_d+xs_p;
            sigma_c12 = (xs_p * 6 + xs_n * 6);
            sigma_al = (xs_p * 13 + xs_n * 14);
            sigma_w = sigma_al;

            //Wiser returns the XS for a signle-proton target
            double Theta_Deg = Theta * Rad2Deg;
            RL = 0.5 * Rad_Len_D2 + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_d2);
            RL = 0.5 * Rad_Len_H3 + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_h3);
            RL = 0.5 * Rad_Len_He3 + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_he3);
            RL = 0.5 * Rad_Len_C12 + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_c12);
            RL = 0.5 * Rad_Len_Window + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_w);
            RL = 0.5 * Rad_Len_AL + 5.0;
            wiser_all_sig_(&E0, &Ep, &Theta_Deg,&RL, &type, &sigma_wiser_al);

 //           cout<<Form("Pi-: D2=%f,  H3=%f, He3=%f, Window=%f", sigma_wiser_d2, sigma_wiser_h3, sigma_wiser_he3, sigma_wiser_al)<<endl;
            
            sigma_wiser_d2 *= sigma_d2 /xs_p * WISER_Factor;
            sigma_wiser_h3 *= sigma_h3 /xs_p * WISER_Factor;
            sigma_wiser_he3*= sigma_he3 /xs_p * WISER_Factor;
            sigma_wiser_c12*= sigma_c12 /xs_p * WISER_Factor;
            sigma_wiser_al *= sigma_al /xs_p * WISER_Factor;
            sigma_wiser_w *= sigma_w /xs_p * WISER_Factor;

            if(IsDebug)
                printf("^^^^ XS_D = %10.4e\n", xs_d);

            //if(W>2.0&&xb<1.00){//Only consider the DIS events with W>2.0 cut, for high-x poins, we may need smaller W cut.
            if((W>2.0&&xb<0.70)||(W>sqrt(3.0)&&xb>0.70)){//Only consider the DIS events with W>2.0 cut, for high-x poins, we may need smaller W cut.
                D2_XS_Sum += sigma_d2 * NBARN_TO_CM2;//cm2/GeV/sr
                H3_XS_Sum += sigma_h3 * NBARN_TO_CM2;//cm2/GeV/sr
                He3_XS_Sum += sigma_he3 * NBARN_TO_CM2;//cm2/GeV/sr
                C12_XS_Sum += sigma_c12 * NBARN_TO_CM2;//cm2/GeV/sr
                AL_XS_Sum += sigma_al * NBARN_TO_CM2;//cm2/GeV/sr
                Window_XS_Sum += sigma_w * NBARN_TO_CM2;//Assuming it is pure Al, Z = 13, N = 14
                xb_sum+=xb* sigma_h3 * NBARN_TO_CM2;
                W2_sum+=W*W* sigma_h3 * NBARN_TO_CM2;

                Count++;
            }
            
            Count1++;
            D2_XS_Sum_Wiser += sigma_wiser_d2 * NBARN_TO_CM2;
            H3_XS_Sum_Wiser += sigma_wiser_h3 * NBARN_TO_CM2;
            He3_XS_Sum_Wiser += sigma_wiser_he3 * NBARN_TO_CM2;
            C12_XS_Sum_Wiser += sigma_wiser_c12 * NBARN_TO_CM2;
            AL_XS_Sum_Wiser += sigma_wiser_al * NBARN_TO_CM2;
            Window_XS_Sum_Wiser += sigma_wiser_w * NBARN_TO_CM2;
        }
        /*}}}*/

        //if(IsDebug)
        //T->Fill();
    }
    //printf("pi/e: XS_Sum=%10.4e, Window_XS_Sum=%10.4e\n",H3_XS_Sum_Wiser/H3_XS_Sum, Window_XS_Sum_Wiser/Window_XS_Sum);
    /*}}}*/

    /*Calculate rates{{{*/
    double D2_Rate = D2_Lumi * D2_XS_Sum * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double H3_Rate = H3_Lumi * H3_XS_Sum * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double He3_Rate = He3_Lumi * He3_XS_Sum * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double C12_Rate = C12_Lumi * C12_XS_Sum * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double AL_Rate = AL_Lumi * AL_XS_Sum * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double Window_Rate = Window_Lumi * Window_XS_Sum * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz

    //calculate pi/e
    double D2_Wiser_Rate = D2_Lumi * D2_XS_Sum_Wiser * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double H3_Wiser_Rate = H3_Lumi * H3_XS_Sum_Wiser * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double He3_Wiser_Rate = He3_Lumi * He3_XS_Sum_Wiser * Phase_Space / Nevnt; //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double C12_Wiser_Rate = C12_Lumi * C12_XS_Sum_Wiser * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double AL_Wiser_Rate = AL_Lumi * AL_XS_Sum_Wiser * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    double Window_Wiser_Rate = Window_Lumi * Window_XS_Sum_Wiser * Phase_Space / Nevnt;  //cm-2*s-1 * cm2/GeV/sr * sr*GeV = s-1 = Hz
    /*}}}*/

    /*Calculate Pi/e ratio{{{*/
    double Pi_E_D2 = (D2_Wiser_Rate + Window_Wiser_Rate)/(D2_Rate + Window_Rate);
    double Pi_E_H3 = (H3_Wiser_Rate + Window_Wiser_Rate)/(H3_Rate + Window_Rate);
    double Pi_E_He3 = (He3_Wiser_Rate + Window_Wiser_Rate)/(He3_Rate + Window_Rate);
 
    //double Pi_E_Gas = Pi_E_D2;
    //Pi_E_Gas = (Pi_E_Gas>Pi_E_H3)?Pi_E_Gas:Pi_E_H3;
    //Pi_E_Gas = (Pi_E_Gas>Pi_E_He3)?Pi_E_Gas:Pi_E_He3;
    //cout<<Form("pi/e: %f(D2) %f(H3) %f(He3)", Pi_E_D2, Pi_E_H3, Pi_E_He3 )<<endl;
    /*}}}*/

    //xb_avg[0] = xb_sum/Count;
    //W2_avg[0] = W2_sum/Count;
    W2_avg[0] = W2_sum/H3_XS_Sum;
    xb_avg[0] = xb_sum/H3_XS_Sum;
    xs_d2_avg[0] = D2_XS_Sum/Count / NBARN_TO_CM2;
    xs_h3_avg[0] = H3_XS_Sum/Count / NBARN_TO_CM2;
    xs_he3_avg[0] = He3_XS_Sum/Count / NBARN_TO_CM2;

    xs_d2_avg[1] = D2_XS_Sum_Wiser/Count1/ NBARN_TO_CM2;
    xs_h3_avg[1] = H3_XS_Sum_Wiser/Count1/ NBARN_TO_CM2;
    xs_he3_avg[1] = He3_XS_Sum_Wiser/Count1/ NBARN_TO_CM2;

    rate_d2[0] = D2_Rate * Corr_Factor;
    rate_h3[0] = H3_Rate * Corr_Factor;
    rate_he3[0] = He3_Rate * Corr_Factor;
    rate_window[0] = Window_Rate * Corr_Factor;
    rate_c12[0] = C12_Rate * Corr_Factor;
    rate_al[0] = AL_Rate * Corr_Factor;
    pi_e[0] = Pi_E_D2;
    pi_e[1] = Pi_E_H3;
    pi_e[2] = Pi_E_He3;
    pi_e[3] = Window_Wiser_Rate/Window_Rate;
    pi_e[4] = C12_Wiser_Rate/C12_Rate;
    pi_e[5] = AL_Wiser_Rate/AL_Rate;

    //file->cd(); T->Write(); file->Close();
    delete evt;
    delete dis;
}
/*}}}GetRate*/

/*main{{{*//*{{{*//*}}}*/
int main(){

    const double E0 = 10.6;
    double Evt_Bin = 25000;
    //double P0=3.1; 
    double P0=3.1; 
    double xbj = 0; cout<<"--- xbj = "; cin >> xbj;
    double I_Current = 0.0; cout<<"--- Beam Current (uA) = "; cin >> I_Current;

    double T0,Q2, W2, xbj_avg,W2_avg;;
    double rate_he3, rate_h3, rate_d2, rate_w, rate_al, rate_c12, hour_he3, hour_h3, hour_d2; 
    double pi_e[6];
    double xs_he3[2], xs_h3[2], xs_d2[2],xs_he3_avg[2], xs_h3_avg[2], xs_d2_avg[2];
    //double total_day=0.0;
    //double total_day_last=0.0;
    //double total_day_he3=0.0;
    //double total_day_h3=0.0;
    //double total_day_d2=0.0;
    std::string spec= "HRS"; 
    std::string model = ""; 
    int mod = 3; //cout<<"-- Which model (1->CJ, 2->F1F2IN09, 3->F2ALLM or 4->PB) "; cin >> mod;
    if(mod==1) model="CJ";
    else if(mod==2) model="F1F2IN09";
    else if(mod==3) model="F2ALLM";
    else if(mod==4) model="PB";
    else {cerr<<"*** Wrong model#!!!!"<<endl; return -111;}

    double nu = E0 - P0;
    Q2 = 2.0 * PROTON_MASS * nu * xbj;
    double SinSQ = Q2 / 4.0 / E0 / P0;
    T0 = 2.0 * asin(sqrt(SinSQ)) / Deg2Rad;

    if(abs(xbj-0.87)<0.001)
        T0 = 47.10;

    W2 = PROTON_MASS*PROTON_MASS + 2.0*PROTON_MASS*nu - Q2;

    GetRate(spec.c_str(), model.c_str(),  "",  E0, P0, T0, I_Current, &xbj_avg,&W2_avg, xs_he3, xs_he3_avg, &rate_he3, xs_h3,xs_h3_avg, &rate_h3, xs_d2,xs_d2_avg, &rate_d2, &rate_w, &rate_c12,&rate_al, pi_e);

    //Acount for 10% loss of using SOS quards/*{{{*/
    if(spec=="HRS"){
        rate_he3 *=0.9;
        rate_h3 *=0.9;
        rate_d2 *=0.9;
        //80% due to RC, 80% due to efficiecies
        rate_he3 *=0.8*0.75;
        rate_h3 *=0.8*0.75;
        rate_d2 *=0.8*0.75;
    }

    if(xbj>0.83) Evt_Bin=20000;
    if(rate_he3>1e-4)
        hour_he3 =  Evt_Bin/(rate_he3*60.*60.);
    else
        hour_he3 = 0;
    if(rate_h3>1e-4)
        hour_h3 =  Evt_Bin/(rate_h3*60.*60.);
    else
        hour_h3 = 0;
    if(rate_d2>1e-4)
        hour_d2 =  Evt_Bin/(rate_d2*60.*60.);
    else
        hour_d2 = 0;
    //double total_hour = hour_d2+hour_h3+hour_he3;
    /*}}}*/

    cout<<endl;
    printf(" ====== xbj = %f, P0=%f, T0=%f ====== \n", xbj, P0, T0);
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("*** Electron XS (avg): D2 = %6.3e (%6.3e), H3 = %6.3e (%6.3e), He3 = %6.3e (%6.3e) \n", xs_d2[0], xs_d2_avg[0], xs_h3[0], xs_h3_avg[0], xs_he3[0], xs_he3_avg[0]);
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("***     Pion XS (avg): D2 = %6.3e (%6.3e), H3 = %6.3e (%6.3e), He3 = %6.3e (%6.3e) \n", xs_d2[1], xs_d2_avg[1], xs_h3[1], xs_h3_avg[1], xs_he3[1], xs_he3_avg[1]);
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("**    D2:  Total Rate = %5.1f Hz, e Rate = %5.1f Hz (%5.1f Hz good e,%4.1f hrs), Pi/E=%3.1f, N(ele)=%dK, N(tot)=%dK, time=%dmins \n", 
            (rate_d2+rate_w)*(pi_e[0]+1), (rate_d2+rate_w), rate_d2, hour_d2,pi_e[0], 25, int((rate_d2+rate_w)*(pi_e[0]+1)*25.+0.5), int(25000./(rate_d2)/60.+0.5) );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("**    H3:  Total Rate = %5.1f Hz, e Rate = %5.1f Hz (%5.1f Hz good e,%4.1f hrs), Pi/E=%3.1f, N(ele)=%dK, N(tot)=%dK, time=%dmins \n", 
            (rate_h3+rate_w)*(pi_e[1]+1), (rate_h3+rate_w), rate_h3, hour_h3,pi_e[1], 25, int((rate_h3+rate_w)*(pi_e[1]+1)*25.+0.5), int(25000./(rate_h3)/60.+0.5) );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("**   He3:  Total Rate = %5.1f Hz, e Rate = %5.1f Hz (%5.1f Hz good e,%4.1f hrs), Pi/E=%3.1f, N(ele)=%dK, N(tot)=%dK, time=%dmins \n", 
            (rate_he3+rate_w)*(pi_e[2]+1), (rate_he3+rate_w), rate_he3, hour_he3,pi_e[2], 25, int((rate_he3+rate_w)*(pi_e[2]+1)*25.+0.5), int(25000./(rate_he3)/60.+0.5) );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("** Empty:  Total Rate = %5.1f Hz, e Rate = %5.1f, Pi/E=%3.1f, N(ele)=%dK, N(tot)=%dK, time=%dmins  \n",
            (rate_w)*(pi_e[3]+1), rate_w,pi_e[3], 25, int((rate_w)*(pi_e[3]+1)*25.+0.5), int(25000./(rate_w)/60.+0.5) );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("**Optics:  Total Rate = %5.1f Hz, e Rate = %5.1f, Pi/E=%3.1f  \n",(rate_c12)*(pi_e[4]+1),  rate_c12,pi_e[4] );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    printf("** Dummy:  Total Rate = %5.1f Hz, e Rate = %5.1f Pi/E=%3.1f  \n", (rate_al)*(pi_e[5]+1), rate_al,pi_e[5] );
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<endl;

}
/*}}}*/
