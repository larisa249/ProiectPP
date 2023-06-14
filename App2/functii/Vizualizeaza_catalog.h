#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_CATALOG_H
#define VEZI_CATALOG_H

void vizualizeaza_catalog(){
  
  string nroferte, id, pret, nrjocuri, categorie, idjoc, numejoc,pretinitial;

  ifstream fin("catalog.txt");
  getline(fin,nroferte);
  cout<<"Lista de oferte este: \n";
  for(int i=0; i<stoi(nroferte); i++){ 
    getline(fin,id);
    cout <<"Oferta "<< id << ": \n"; //id-ul ofertei

    getline(fin, pret); 
    cout <<"Pret: "<< pret <<"\n" ; //pretul ofertei

    getline(fin, nrjocuri); //nr de jocuri
    getline(fin, categorie);
    cout<<"Jocurile din categoria "<<categorie<<" ale ofertei sunt: \n";
    for(int j=0; j<stoi(nrjocuri); j++){
      getline(fin,idjoc);
      getline(fin,numejoc);
      getline(fin,pretinitial);
      cout<<numejoc<<" cu pretul initial "<<pretinitial<<"\n";
    }

    cout <<'\n'; 
  }



  fin.close();
}




#endif