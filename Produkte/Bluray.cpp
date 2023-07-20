//
// Created by andyh on 24.06.2023.
//

#include "Bluray.h"

namespace std {
    string Bluray::to_String() {

        return "Bluray" + to_string(ProduktID) + " " + Titel + " " + to_string(AnzahlTracks) + " " + Aufloesung;
    };

    ostream& operator<<(ostream& os, Bluray& b){
        os <<b.to_String();
        return os;
    };
} // std