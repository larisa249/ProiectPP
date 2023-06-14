#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_COMENZI_H
#define VEZI_COMENZI_H

void vizualizeaza_comenzi(){
  string nrJocuri, aux;

  ifstream fin("comenzi.txt");
  if (fin.peek() == ifstream::traits_type::eof()) {
        cout << "Nu exista comenzi.\n";
    } 
  else{
  cout<<"Lista de jocuri comandate este: \n";
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