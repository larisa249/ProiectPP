#include "C:\\Users\\laris\\OneDrive\\Desktop\\proiecte\\pp-jocuri\\shared\\Data\\categorie.h"
#include <iostream>
#include <string>

categorie::categorie()
{
    numeCategorie=nullptr;
}
categorie::categorie(string numeCategorie)
{
    this->numeCategorie=numeCategorie;
}
categorie::categorie(categorie&c)
{
    this->numeCategorie=c.numeCategorie;  
}

string categorie::getNume(){
    return numeCategorie;
}