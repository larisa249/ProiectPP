#include <iostream>
#include <fstream>

using namespace std;

#ifndef TRIMITE_COMANDA_H
#define TRIMITE_COMANDA_H

void trimite_comanda(){
  string denumire, nrJocuri;
  int id, nrCumparari;
  double pret, memorie;
  
  ifstream fin("cos.txt");
  if (!fin) {
        cout << "Nu se poate deschide fisierul 'cos.txt'." << endl;
        return;
    }
  
  while(fin>>id){
     fin.ignore();
    //cout << id <<" <----\n";
    getline(fin, denumire);
    fin >> pret >> memorie; fin.ignore();

    
      ofstream fout("comenzi.txt", std::ios_base::app); // Adaugam in fisier

      fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

      fout.close();
      
  }
  cout<<"Comanda a fost trimisa!";
  fin.close();

  ofstream fout("cos.txt", ios::trunc);
    if (!fout) {
        std::cerr << "Nu se poate deschide fisierul '" << "cos.txt" << "'." << endl;
        return;
    }

    fout.close();
}

#endif