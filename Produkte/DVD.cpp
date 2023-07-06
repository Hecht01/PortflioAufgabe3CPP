//
// Created by andyh on 24.06.2023.
//

#include "DVD.h"
#include "iostream"

string DVD::to_String() {

    return "DVD" + to_string(ProduktID) + " " + Titel + " " + LaufzeitInMintuten;
};

ostream& operator<<(ostream& os, DVD& d){
    os <<d.to_String();
    return os;
};