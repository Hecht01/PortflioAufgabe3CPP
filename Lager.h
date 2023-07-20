//
// Created by andyh on 20.07.2023.
//

#ifndef PORTFLIOAUFGABE3_LAGER_H
#define PORTFLIOAUFGABE3_LAGER_H
#include <string>
#include <vector>

namespace std {

    class Lager {
    private:
        int Produktid;
        int Anzahl;
    public:
        Lager(int Produktid, int Anzahl):
                Produktid(Produktid), Anzahl(Anzahl){};
        string to_String();
        friend ostream& operator<<(ostream& os, Lager& l);

    };

} // std

#endif //PORTFLIOAUFGABE3_LAGER_H
