//
// Created by andyh on 24.06.2023.
//

#ifndef PORTFLIOAUFGABE3_DVD_H
#define PORTFLIOAUFGABE3_DVD_H
#include "Disc.h"


using namespace std;

class DVD: public Disc{
private:
    string LaufzeitInMintuten;
public:
    DVD(int ProduktID, string Titel, string LaufzeitInMinuten):
    Disc(Titel, ProduktID),
    LaufzeitInMintuten(LaufzeitInMinuten){};
    string to_String();
    friend ostream& operator<<(ostream& os, DVD& d);
};


#endif //PORTFLIOAUFGABE3_DVD_H
