//
// Created by andyh on 24.06.2023.
//

#ifndef PORTFLIOAUFGABE3_BLURAY_H
#define PORTFLIOAUFGABE3_BLURAY_H
#include <string>
#include "Disc.h"

namespace std {

    class Bluray :public Disc{
    private:
        int AnzahlTracks;
        string Aufloesung;
    public:
        Bluray(int ProduktID, string Titel, int AnzahlTracks, string Aufloesung):
                Disc(Titel, ProduktID), AnzahlTracks(AnzahlTracks),
                Aufloesung(Aufloesung){};
        string to_String();
        friend ostream& operator<<(ostream& os, Bluray& b);

    };

} // std

#endif //PORTFLIOAUFGABE3_BLURAY_H
