#include <iostream>
#include <fstream>
#include <cstring>

#include "./functii/Vezi_jocuri.h"
#include "./functii/Cumpara_joc.h"
#include "./functii/Instaleaza_joc.h"
#include "./functii/Vizualizeaza_cos.h"
using namespace std;


int main(int nrArg, char** Arguments){
    if(nrArg==1){
        cout<< "Comenzi posibile: \n"
               "vezi_jocuri\n"
               "cumpara_joc <id_joc>\n"
               "instaleaza_joc <id_joc>\n"
               "vizualizeaza_cos\n";
    }

    if(strcmp(Arguments[1], "vezi_jocuri")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: vezi_jocuri";
            return 0;
        }else{
            vezi_jocuri();
            return 0;
        }

    }

    if(strcmp(Arguments[1], "cumpara_joc")==0 ){
        if(nrArg!=3){
            cout<<" Sintaxa invalida! Sintaxa corecta: cumpara_joc <id_joc>";
            return 0;
        }else{
            cumpara_joc(Arguments[2]);
            return 0;
        }
    }

    if(strcmp(Arguments[1], "instaleaza_joc")==0 ){
        if(nrArg!=3){
            cout<<" Sintaxa invalida! Sintaxa corecta: instaleaza_joc <id_joc>";
            return 0;
        }else{
            instaleaza_joc(Arguments[2]);
            return 0;
        }
    }

    if(strcmp(Arguments[1], "vizualizeaza_cos")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: vizualizeaza_cos";
            return 0;
        }else{
            vizualizeaza_cos();
            return 0;
        }
    }


    cout << "Sintaxa gresita \n";
    return 0;
}
