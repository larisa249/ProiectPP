#include <iostream>
#include <fstream>

using namespace std;

#ifndef CUMPARA_JOC_H
#define CUMPARA_JOC_H

void cumpara_joc(const string idJocDeCumparat){
  bool gasit = false;

  string denumire, nrJocuri;
  int id, nrCumparari;
  double pret, memorie;
  
  ifstream fin("../shared/files/produse.txt");
  getline(fin, nrJocuri); //Citim numarul de jocuri

  for(int i = 0; i < stoi(nrJocuri); i++){
    fin >> id; fin.ignore();
    //cout << id <<" <----\n";
    getline(fin, denumire);
    fin >> pret >> nrCumparari >> memorie; fin.ignore();

    if(id == stoi(idJocDeCumparat)){ //gasim jocul
      gasit = true;

      ofstream fout("cos.txt", std::ios_base::app); // Adaugam in cos

      fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

      fout.close();
      cout<<"Jocul a fost achizitionat!";
    }
  }

  fin.close();

  if(!gasit){
    cout << "Nu exista id-ul acestui joc! \n";
  }
  
}

#endif