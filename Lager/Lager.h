//
// Created by andyh on 20.07.2023.
//

#ifndef PORTFLIOAUFGABE3_LAGER_H
#define PORTFLIOAUFGABE3_LAGER_H
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "../Produkte/Bluray.h"
#include "../Produkte/DVD.h"
#include "../Kunde/Kunde.h"

namespace std {

    class Lager {
    private:

        vector<shared_ptr<Bluray>> Blurays;
        vector<shared_ptr<DVD>> DVDs;
        vector<shared_ptr<Kunde>> Kunden;

        map<int,shared_ptr<Bluray>> BluraysMap{};
        map<int,shared_ptr<DVD>>DVDsMap{};
        map<int,shared_ptr<Kunde>> KundenMap{};
        map<int,int> ProdukteImLager{};
    public:
        Lager(){};
        string to_String();
        friend ostream& operator<<(ostream& os, Lager& l);

        void setBlurayMap(vector<shared_ptr<Bluray>> b);

        void setDVDMap(vector<shared_ptr<DVD>> d);

        void setKundenMap(vector<shared_ptr<Kunde>> k);

        void setProdukteImLager(map<int,int> ProdukteImLager);

        void printKundenMap();

        void printDVDsMap();

        void printBluraysMap();

        void printProdukteImLagerMap();

        void printAll();

        vector<string> exportAll();

    };

} // std

#endif //PORTFLIOAUFGABE3_LAGER_H
