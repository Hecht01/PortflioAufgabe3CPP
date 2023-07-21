//
// Created by andyh on 20.07.2023.
//

#include "Kunde.h"

namespace std {
    string Kunde::to_String() {
        return "Kunde " + to_string(Kundennummer) + " " + Name + " " + Vorname +
        " " + Addresse + " " + Hausnummer + " " + Postleitzahl + " " + Ort;
    };

    ostream& operator<<(ostream& os, Kunde& k){
        os <<k.to_String();
        return os;
    };
} // std