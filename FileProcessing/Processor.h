//
// Created by andyh on 20.07.2023.
//

#ifndef PORTFLIOAUFGABE3_PROCESSOR_H
#define PORTFLIOAUFGABE3_PROCESSOR_H
#include <string>
#include <vector>
#include <memory>
#include "..\Produkte\DVD.h"
#include "..\Produkte\Bluray.h"
#include "../Kunde/Kunde.h"


class Processor {
private:
    vector<shared_ptr<Bluray>> Blurays;
    vector<shared_ptr<DVD>> DVDs;
    vector<shared_ptr<Kunde>> Kunden;
    vector<string> FileSplitInLines;

    map<int,int> ProdukteImLager{};

public:
    Processor(vector<string> FileSplitInLines):
            FileSplitInLines(FileSplitInLines){};
    void Process();

    void operator () (){
        Process();
    }
    void setProdukteImLager(int ProduktID,int Anzahl);

    vector<shared_ptr<Bluray>> getBlurays(){
        return Blurays;
    };
    vector<shared_ptr<DVD>> getDVDs(){
        return DVDs;
    };
    vector<shared_ptr<Kunde>> getKunden(){
        return Kunden;
    };
    vector<string> getFileSplitInLines(){
        return FileSplitInLines;
    };

    map<int,int> getProdukteImLager(){
        return ProdukteImLager;
    };

};


#endif //PORTFLIOAUFGABE3_PROCESSOR_H
