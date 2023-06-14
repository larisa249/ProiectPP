#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_JOCURI_H
#define VEZI_JOCURI_H

void vezi_jocuri(){
  cout<<"Lista de jocuri: \n";
  string nrJocuri, aux;

  ifstream fin("../shared/files/produse.txt");
  getline(fin, nrJocuri); //Citim numarul de jocuri

  int intNrJocuri = stoi(nrJocuri);

  for(int i = 0; i < intNrJocuri; i++){
    getline(fin, aux); //ID
    cout << aux << ". "; 

    getline(fin, aux); //NUME
    cout << aux << ", PRET: "; 

    getline(fin, aux); //PRET
    cout << aux << ", MEMORIE NECESARA: ";

    getline(fin, aux); //nrCumparari;
    getline(fin, aux);// memorei

    cout << aux << '\n'; 
  }



  fin.close();
}

#endif

// ofstream fout("../shared/files/CEVA.txt");