//
// Created by andyh on 20.07.2023.
//

#include "Lager.h"

namespace std {

    string Lager::to_String() {

        return "Lager" + to_string(Produktid) + " " + to_string(Anzahl);
    };

    ostream& operator<<(ostream& os, Lager& l){
        os <<l.to_String();
        return os;
    };

} // std