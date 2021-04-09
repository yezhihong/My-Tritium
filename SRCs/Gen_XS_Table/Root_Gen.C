
void Root_Gen(){
  int A,Z,i,j;
  double Theta,mom,theta,cs_born,cs_rad,tail,qsq,xbj;
  TString Infile; cerr<<"Input XS File = "; cin >> Infile;

  TFile *f1 = new TFile(Form("%s.root",Infile.Data()),"recreate");
  TTree *T = new TTree("T","A New Tree");

  T->Branch("A",&A, "A/I");
  T->Branch("Z",&Z, "Z/I");
  T->Branch("i",&i, "i/I");
  T->Branch("Theta",&Theta, "Theta/D");
  T->Branch("mom",&mom, "mom/D");
  T->Branch("theta",&theta, "theta/D");
  T->Branch("cs_born",&cs_born, "cs_born/D");
  T->Branch("cs_rad",&cs_rad, "cs_rad/D");
  T->Branch("tail",&tail, "tail/D");
  T->Branch("xbj",&xbj, "xbj/D");
  T->Branch("qsq",&qsq, "qsq/D");

  ifstream inf; inf.open(Infile.Data());
  TString com; 
  inf >> com >> com >> com >> com >> com >> com >> com >> com >> com >> com;
  cerr<<com.Data()<<endl;
  int count = 0;
  while(!inf.eof()){
   inf >> A >> Z >> Theta >> mom >> j >> theta >> i >> cs_born >> cs_rad >> tail;
   qsq = 4.0 * 3.356 * mom * pow(sin(theta*3.1415926/180. * 0.5),2); 
   xbj = qsq/(2.0 *0.938272 * (3.356-mom));
   
   T->Fill();
   count++;

  // if(!(count%10000))
	//   cerr<<"--- Events = "<< count<<endl;
  }

  f1->cd(); T->Write(); f1->Close();

}
