//
// Created by andyh on 24.06.2023.
//

#ifndef PORTFLIOAUFGABE3_BLURAY_H
#define PORTFLIOAUFGABE3_BLURAY_H
#include <string>
#include "Disc.h"
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "../Produkte/Bluray.h"
#include "../Produkte/DVD.h"
#include "../Kunde/Kunde.h"

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
        int getId(){
            return ProduktID;
        }
        string getName(){
            return Titel;
        }
        friend ostream& operator<<(ostream& os, Bluray& b);

        void setTitleForExport();

    };

} // std

#endif //PORTFLIOAUFGABE3_BLURAY_H
