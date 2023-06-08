#ifndef Data_H
#define Data_H
#include <string>
using namespace std;

class dataa{
  int zi;
  int luna;
  int an;
  public:
  dataa();
  dataa(int,int,int);
  dataa(dataa&);
  int getZi();
  int getAn();
  int getLuna();
  void afisareData();
};




#endif