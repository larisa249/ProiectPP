#include <iostream>
#include <fstream>
#include <cstring>

#include "./functii/Vezi_jocuri.h"
#include "./functii/Cumpara_joc.h"
#include "./functii/Instaleaza_joc.h"
#include "./functii/Vizualizeaza_cos.h"
#include "./functii/Trimite_comanda.h"
#include "./functii/Vizualizeaza_comenzi.h"
#include "./functii/Vizualizeaza_jocuriInstalate.h"
#include "./functii/Sterge_joc.h"
#include "./functii/Dezinstaleaza_joc.h"
#include "./functii/Vizualizeaza_catalog.h"
using namespace std;


int main(int nrArg, char** Arguments){
    if(nrArg==1){
        cout<< "Comenzi posibile: \n"
               "vezi_jocuri\n"
               "vizualizeaza_cos\n"
               "vizualizeaza_comenzi\n"
               "vizualizeaza_jocuriInstalate\n"
               "vizualizeaza_catalog\n"
               "cumpara_joc <id_joc>\n"
               "sterge_joc <id_joc>\n"
               "instaleaza_joc <id_joc>\n" 
               "dezinstaleaza_joc <id_joc>\n"
               "trimite_comanda\n";
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

    if(strcmp(Arguments[1], "trimite_comanda")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: trimite_comanda";
            return 0;
        }else{
            trimite_comanda();
            return 0;
        }
    }

    if(strcmp(Arguments[1], "vizualizeaza_comenzi")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: vizualizeaza_comenzi";
            return 0;
        }else{
            vizualizeaza_comenzi();
            return 0;
        }
    }

    if(strcmp(Arguments[1], "vizualizeaza_jocuriInstalate")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: vizualizeaza_jocuriInstalate";
            return 0;
        }else{
            vizualizeaza_jocuriInstalate();
            return 0;
        }
    }

    if(strcmp(Arguments[1], "sterge_joc")==0 ){
        if(nrArg!=3){
            cout<<" Sintaxa invalida! Sintaxa corecta: sterge_joc <id_joc>";
            return 0;
        }else{
            sterge_joc(Arguments[2]);
            return 0;
        }
    }


    if(strcmp(Arguments[1], "dezinstaleaza_joc")==0 ){
        if(nrArg!=3){
            cout<<" Sintaxa invalida! Sintaxa corecta: dezinstaleaza_joc <id_joc>";
            return 0;
        }else{
            dezinstaleaza_joc(Arguments[2]);
            return 0;
        }
    }

    if(strcmp(Arguments[1], "vizualizeaza_catalog")==0){
        if(nrArg!=2){
            cout<<" Sintaxa invalida! Sintaxa corecta: vizualizeaza_catalog";
            return 0;
        }else{
            vizualizeaza_catalog();
            return 0;
        }
    }

    cout << "Sintaxa gresita \n";
    return 0;
}
