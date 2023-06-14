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
  string nume, prenume, adresa, nrTelefon;
  cout<<"Nume: "; getline(cin,nume);
  cout<<"Prenume: "; getline(cin,prenume);
  cout<<"Adresa: "; getline(cin,adresa);
  cout<<"Numar de telefon: "; getline(cin, nrTelefon);

  while(fin>>id){
     fin.ignore();
    //cout << id <<" <----\n";
    getline(fin, denumire);
    fin >> pret >> memorie; fin.ignore();

    
      ofstream fout("comenzi.txt", std::ios_base::app); // Adaugam in fisier

      fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

      fout.close();
      
  }
  cout<<"Comanda a fost trimisa catre "<<nume<<" "<<prenume<<"!";
  fin.close();

  ofstream fout("cos.txt", ios::trunc);
    if (!fout) {
        std::cerr << "Nu se poate deschide fisierul '" << "cos.txt" << "'." << endl;
        return;
    }

    fout.close();
}

#endif