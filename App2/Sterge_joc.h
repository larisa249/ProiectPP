#include <iostream>
#include <fstream>

using namespace std;

#ifndef STERGE_JOC_H
#define STERGE_JOC_H

void sterge_joc(const std::string& idJocDeSters) {
    string numeFisier = "cos.txt";
    string numeFisierTemp = "cos_temp.txt";

    ifstream fin(numeFisier);
    if (!fin) {
        cerr << "Nu se poate deschide fisierul 'cos.txt'." << endl;
        return;
    }

    ofstream fout(numeFisierTemp);
    if (!fout) {
        cerr << "Nu se poate deschide fisierul 'cos_temp.txt' pentru scriere." << endl;
        return;
    }

    string line;
    bool jocSters = false;
    bool gasit = false;

    while (getline(fin, line)) {
        if (line == idJocDeSters && !jocSters) {
            jocSters = true;
            gasit = true;
            
            for (int i = 0; i < 3; i++) {
                getline(fin, line);
            }
            continue; 
        }

        fout << line << '\n';
    }

    fin.close();
    fout.close();

    if (gasit) {
        remove(numeFisier.c_str());
        rename(numeFisierTemp.c_str(), numeFisier.c_str());
        cout << "Jocul a fost sters din cosul de cumparaturi! " << endl;
    } else {
        remove(numeFisierTemp.c_str());
        cerr << "Nu exista joc cu ID-ul " << idJocDeSters << " in fisierul 'cos.txt'." << endl;
    }
}

#endif