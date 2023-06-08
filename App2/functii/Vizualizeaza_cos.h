#include <iostream>
#include <fstream>

using namespace std;

#ifndef VEZI_COS_H
#define VEZI_COS_H

void vizualizeaza_cos(){
  cout<<"Lista de jocuri din cos: \n";
  string nrJocuri, aux;

  ifstream fin("cos.txt");

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