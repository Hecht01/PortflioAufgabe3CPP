//
// Created by andyh on 20.07.2023.
//

#ifndef PORTFLIOAUFGABE3_PROCESSOR_H
#define PORTFLIOAUFGABE3_PROCESSOR_H
#include <string>
#include <vector>
#include <memory>
#include "A:\Coding Stuff\C++\cppUni\PortflioAufgabe3\Produkte\DVD.h"
#include "A:\Coding Stuff\C++\cppUni\PortflioAufgabe3\Kunde.h"


class Processor {
private:
    vector<shared_ptr<Disc>> Produkte;
    vector<shared_ptr<Kunde>> Kunden;
    vector<string> FileSplitInLines;

public:
    Processor(vector<string> FileSplitInLines):
            FileSplitInLines(FileSplitInLines){};
    void Process();

    void operator () (){
        Process();
    }


};


#endif //PORTFLIOAUFGABE3_PROCESSOR_H
