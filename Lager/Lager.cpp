//
// Created by andyh on 20.07.2023.
//

#include "Lager.h"

namespace std {

    string Lager::to_String() {

        return "Lager";
    };

    ostream& operator<<(ostream& os, Lager& l){
        os <<l.to_String();
        return os;
    };

    void Lager::setBlurayMap(vector<shared_ptr<Bluray>> b){
        Blurays = b;
        for(int i = 0; i < Blurays.size(); i++){
            BluraysMap[Blurays.at(i)->getId()] = Blurays.at(i);
        }
    }

    void Lager::setDVDMap(vector<shared_ptr<DVD>> d){
        DVDs = d;
        for(int i = 0; i < DVDs.size(); i++){
            DVDsMap[DVDs.at(i)->getId()] = DVDs.at(i);
        }
    }

    void Lager::setKundenMap(vector<shared_ptr<Kunde>> k){
        Kunden = k;
        for(int i = 0; i < Kunden.size(); i++){
            KundenMap[Kunden.at(i)->getId()] = Kunden.at(i);
        }
    }

    void Lager::setProdukteImLager(map<int,int> ProdukteImLagerNeu){
        ProdukteImLager =  ProdukteImLagerNeu;
    }

    void Lager::printKundenMap(){
        for (auto i = KundenMap.begin(); i != KundenMap.end();i++) {
            cout << *i->second << endl;
        }
    }
    void Lager::printDVDsMap(){

        for (auto i = DVDsMap.begin(); i != DVDsMap.end();i++) {
            cout << *i->second << endl;
        }
    }
    void Lager::printBluraysMap(){
        for (auto i = BluraysMap.begin(); i != BluraysMap.end();i++) {
            cout << *i->second << endl;
        }
    }

    void Lager::printProdukteImLagerMap() {
        for (auto i = ProdukteImLager.begin(); i != ProdukteImLager.end(); i++) {
            for (auto j = DVDsMap.begin(); j != DVDsMap.end(); j++) {
                if (j->first == i->first) {
                    cout << "Lager " << "DVD " << i->first <<" " << i->second << endl;
                }
            }
            for (auto j = BluraysMap.begin(); j != BluraysMap.end(); j++) {
                if (j->first == i->first) {
                    cout << "Lager " << "Bluray " << i->first<<" " << i->second << endl;
                }
            }
        }
    }

    void Lager::printAll(){
        printKundenMap();
        printDVDsMap();
        printBluraysMap();
        printProdukteImLagerMap();
    }

    vector<string> Lager::exportAll(){
        vector<string> output;
        for (auto i = KundenMap.begin(); i != KundenMap.end();i++) {
            output.push_back(i->second->to_String());
        }

        for (auto i = DVDsMap.begin(); i != DVDsMap.end();i++) {
            i->second->setTitleForExport();
            output.push_back(i->second->to_String());
        }

        for (auto i = BluraysMap.begin(); i != BluraysMap.end();i++) {
            i->second->setTitleForExport();
            output.push_back(i->second->to_String());
        }

        for (auto i = ProdukteImLager.begin(); i != ProdukteImLager.end();i++) {
            output.push_back("Lager " + to_string(i->first) + " " + to_string(i->second));
        }

        return output;
    }

} // std