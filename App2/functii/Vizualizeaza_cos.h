#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_COS_H
#define VEZI_COS_H

void vizualizeaza_cos(){
  
  string nrJocuri, aux;

  ifstream fin("cos.txt");
  if (fin.peek() == ifstream::traits_type::eof()) {
        cout << "Cosul de cumparaturi este gol.\n";
    } 
  else{
  cout<<"Lista de jocuri din cos: \n";
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