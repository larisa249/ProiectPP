#include <iostream>
#include <fstream>

using namespace std;

#ifndef DEZINSTALEAZA_JOC_H
#define DEZINSTALEAZA_JOC_H

void dezinstaleaza_joc(const std::string& idJoc) {
    string numeFisier = "jocuriInstalate.txt";
    string numeFisierTemp = "tempp.txt";

    ifstream fin(numeFisier);
    if (!fin) {
        cerr << "Nu se poate deschide fisierul 'jocuriInstalate.txt'." << endl;
        return;
    }

    ofstream fout(numeFisierTemp);
    if (!fout) {
        cerr << "Nu se poate deschide fisierul 'tempp.txt' pentru scriere." << endl;
        return;
    }

    string line;
    bool jocDezinstalat = false;
    bool gasit = false;

    while (getline(fin, line)) {
        if (line == idJoc && !jocDezinstalat) {
            jocDezinstalat = true;
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
        cout << "Jocul a fost dezinstalat! " << endl;
    } else {
        remove(numeFisierTemp.c_str());
        cerr << "Nu exista joc cu ID-ul " << idJoc << " in fisierul 'cos.txt'." << endl;
    }
}

#endif