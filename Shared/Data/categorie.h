#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <string>
using namespace std;

class categorie{
  string numeCategorie;
  public:
  categorie();
  categorie(string);
  categorie(categorie&);
  string getNume();
};




#endif