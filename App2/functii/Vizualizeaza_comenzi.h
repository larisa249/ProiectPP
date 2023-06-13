#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_COMENZI_H
#define VEZI_COMENZI_H

void vizualizeaza_comenzi(){
  cout<<"Jocurile comandate: \n";
  string nrJocuri, aux;

  ifstream fin("comenzi.txt");

  while(fin >> aux){ // id
    fin.ignore();
    cout << aux << ". "; 

    getline(fin, aux); //NUME
    cout << aux << ", PRET: "; 

    getline(fin, aux); //PRET
    cout << aux << ", MEMORIE NECESARA: ";

  
    getline(fin, aux);// memorie

    cout << aux << '\n'; 
  }



  fin.close();
}




#endif