#include "C:\\Users\\laris\\OneDrive\\Desktop\\proiecte\\pp-jocuri\\shared\\Data\\data.h"
#include <iostream>

dataa::dataa()
{
    zi=0;
    luna=0;
    an=0;
}
dataa::dataa(int zi, int luna, int an)
{
    this->zi=zi;
    this->luna=luna;
    this->an=an;
}
dataa::dataa(dataa&d)
{
    this->zi=d.zi;
    this->luna=d.luna;
    this->an=d.an;
    
}

int dataa::getZi(){
    return zi;
}

int dataa::getAn(){
    return an;
}

int dataa::getLuna(){
    return luna;
}

void dataa::afisareData()