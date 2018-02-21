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

Double_t GetXS_Wiser(Double_t aE0, Double_t aEp, Double_t aTheta, Double_t aRL, Int_t aType){
//RAD_LEN (%)is the radiation length of target, including internal
//                (typically 5%)
//               = .5 *(target radiation length in %) +5.
//       ***  =100. IF BREMSTRULUNG PHOTON BEAM OF 1 EQUIVIVENT QUANTA ***
// TYPE:     1 for pi+;  2 for pi-, 3=k+, 4=k-, 5=p, 6=p-bar
// SIGMA      is output cross section in nanobars/GeV-str
 
    Double_t sigma_wiser = 0.0; 
    if(aType == 12){ //12 -> pi0, 34->K0
        double sigma_wiser_pip = 0.0;
        wiser_all_sig_(&aE0, &aEp, &aTheta,&aRL, 1, &sigma_wiser_pip);
        double sigma_wiser_pim = 0.0;
        wiser_all_sig_(&aE0, &aEp, &aTheta,&aRL, 2, &sigma_wiser_pim);
        sigma_wiser = (sigma_wiser_pip + sigma_wiser_pim) / 2.0;
    }
    else if(aType == 34){ //12 -> pi0, 34->K0
        double sigma_wiser_kp = 0.0;
        wiser_all_sig_(&aE0, &aEp, &aTheta,&aRL, 3, &sigma_wiser_kp);
        double sigma_wiser_km = 0.0;
        wiser_all_sig_(&aE0, &aEp, &aTheta,&aRL, 4, &sigma_wiser_km);
        sigma_wiser = (sigma_wiser_kp + sigma_wiser_km) / 2.0;
    }
    else{//neutron particles
        wiser_all_sig_(&aE0, &aEp, &aTheta,&aRL, &aType, &sigma_wiser);
    }
    return sigma_wiser;
}

Double_t Pi0_Decay(){



}
