#ifndef COMANDA_H
#define COMANDA_H
#include "C:\\Users\\laris\\OneDrive\\Desktop\\proiecte\\pp-jocuri\\shared\\Data\\Joc.h"
#include "C:\\Users\\laris\\OneDrive\\Desktop\\proiecte\\pp-jocuri\\shared\\Data\\data.h"
#include <string>
using namespace std;

class comanda{
  Joc **jocuri;
  dataa **data;
  public:
  comanda();
  comanda(Joc,dataa);
  comanda(comanda&);
};

#endif