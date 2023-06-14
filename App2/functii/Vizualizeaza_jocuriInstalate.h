#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_INSTALARI_H
#define VEZI_INSTALARI_H

void vizualizeaza_jocuriInstalate(){
  string nrJocuri, aux;

  ifstream fin("jocuriInstalate.txt");
  if (fin.peek() == ifstream::traits_type::eof()) {
        cout << "Nu exista jocuri instalate.\n";
    } 
  else{
  cout<<"Jocurile instalate sunt: \n";
  while(fin >> aux){ // id
    fin.ignore();
    cout << aux << ". "; 

    getline(fin, aux); //NUME
    cout << aux << ", PRET: "; 

    getline(fin, aux); //PRET
    cout << aux << ", MEMORIE NECESARA: ";

  
    getline(fin, aux);// memorie

    cout << aux << '\n'; 
  }}



  fin.close();
}




#endif