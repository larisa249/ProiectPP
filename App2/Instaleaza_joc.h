#include <iostream>
#include <fstream>
using namespace std;
#ifndef INSTALEAZA_JOC_H
#define INSTALEAZA_JOC_H 


void instaleaza_joc(const string idd){
  bool gasit = false;

  string denumire, nrJocuri;
  int id, nrCumparari;
  double pret, memorie;
  
  ifstream fin("comenzi.txt");
  if (!fin) {
        cout << "Nu se poate deschide fisierul 'comenzi.txt'." << endl;
        return;
    }

  while(fin>>id){
     fin.ignore();
    //cout << id <<" <----\n";
    getline(fin, denumire);
    fin >> pret >> memorie; fin.ignore();

    if(id == stoi(idd)){ //gasim jocul
      gasit = true;

      ofstream fout("jocuriInstalate.txt", std::ios_base::app); // Adaugam in fisier

      fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

      fout.close();
      cout<<"Jocul a fost instalat!";

    }
  }

  fin.close();

  if(!gasit){
    cout << "Acest joc nu a fost cumparat! \n";
  }
}
#endif