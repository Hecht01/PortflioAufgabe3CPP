//
// Created by andyh on 20.07.2023.
//

#include "Processor.h"
#include <sstream>
#include "iostream"
using namespace std;

class ClassNotCreatable : public exception {
public:
    char * error() {
        return "ClassNotCreatable";
    }
};

class IdAlreadyExists : public exception {
public:
    char * error() {
        return "IdAlreadyExists";
    }
};

class InvalidLagerRequest : public exception {
public:
    char * error() {
        return "InvalidLagerRequest";
    }
};


void Processor::setProdukteImLager(int ProduktID,int Anzahl){
    ProdukteImLager[ProduktID] = Anzahl;
};

void Processor::Process() {
    for(int i = 0; i<FileSplitInLines.size(); i++){
        string Line_i = FileSplitInLines.at(i);
        if(Line_i.substr(0,3) == "Kun"){
            vector<string> LineSplitBySpace;
            string s;
            istringstream stringStream(Line_i);
            while (getline(stringStream, s, ' ')) {
                LineSplitBySpace.push_back(s);
            }
            try {

                if (LineSplitBySpace.size() == 8) {
                    shared_ptr<Kunde> newKunde =
                            make_shared<Kunde>(stoi(LineSplitBySpace.at(1)),
                                               LineSplitBySpace.at(2), LineSplitBySpace.at(3),
                                               LineSplitBySpace.at(4), LineSplitBySpace.at(5),
                                               LineSplitBySpace.at(6), LineSplitBySpace.at(7));
                    for(int j = 0; j < Kunden.size(); j++){
                        if(Kunden.at(j)->getId() == newKunde->getId() and Kunden.at(j)-> getName() != newKunde->getName())
                        {
                            throw IdAlreadyExists();
                        }
                    }
                    Kunden.push_back(newKunde);
                    LineSplitBySpace.clear();

                } else {
                    throw ClassNotCreatable();
                }
            }
            catch(ClassNotCreatable){
                cerr<<"Class 'Kunde' not creatable do to unexpected Format!"<<endl;
            }
            catch(IdAlreadyExists){
                cerr<<"Class 'Kunde' could not be created as ID is already used!"<< endl;
            }

        }
        if(Line_i.substr(0,3) == "Blu"){
            vector<string> LineSplitBySpace;
            string s;
            istringstream stringStream(Line_i);
            while (getline(stringStream, s, ' ')) {
                LineSplitBySpace.push_back(s);
            }
            try {
                if (LineSplitBySpace.size() == 5) {
                    replace(LineSplitBySpace.at(2).begin(),
                            LineSplitBySpace.at(2).end(), '_', ' ');

                    shared_ptr<Bluray> newBluray =
                            make_shared<Bluray>(stoi(LineSplitBySpace.at(1)),
                                               LineSplitBySpace.at(2), stoi(LineSplitBySpace.at(3)),
                                               LineSplitBySpace.at(4));

                    for(int j = 0; j < Blurays.size(); j++){
                        if(Blurays.at(j)->getId() == newBluray->getId() and Blurays.at(j)-> getName() != newBluray->getName())
                        {
                            throw IdAlreadyExists();
                        }
                    }
                    Blurays.push_back(newBluray);
                    LineSplitBySpace.clear();

                } else {
                    throw ClassNotCreatable();
                }
            }
            catch(ClassNotCreatable){
                cerr<<"Class 'Bluray' not creatable do to unexpected Format!"<<endl;
            }
            catch(IdAlreadyExists){
                cerr<<"Class 'Bluray' could not be created as ID is already used!"<< endl;
            }

        }
        if(Line_i.substr(0,3) == "DVD"){
            vector<string> LineSplitBySpace;
            string s;
            istringstream stringStream(Line_i);
            while (getline(stringStream, s, ' ')) {
                LineSplitBySpace.push_back(s);
            }
            try {
                if (LineSplitBySpace.size() == 4) {

                    replace(LineSplitBySpace.at(2).begin(),
                            LineSplitBySpace.at(2).end(), '_', ' ');
                    shared_ptr<DVD> newDVD =
                            make_shared<DVD>(stoi(LineSplitBySpace.at(1)),
                                                LineSplitBySpace.at(2), LineSplitBySpace.at(3));
                    for(int j = 0; j < DVDs.size(); j++){
                        if(DVDs.at(j)->getId() == newDVD->getId() and DVDs.at(j)-> getName() != newDVD->getName())
                        {
                            throw IdAlreadyExists();
                        }
                    }
                    DVDs.push_back(newDVD);
                    LineSplitBySpace.clear();
                } else {
                    throw ClassNotCreatable();
                }
                for(int i = 0; i < DVDs.size(); i++){
                    DVD temp = *DVDs.at(i);
                    for(int j = 0; j < DVDs.size(); j++){
                        if(DVDs.at(j)->getId() == temp.getId() and DVDs.at(j)-> getName() != temp.getName())
                        {
                            throw IdAlreadyExists();
                        }
                    }
                }
            }
            catch(ClassNotCreatable){
                cerr<<"Class 'DVD' not creatable do to unexpected Format!"<<endl;
            }
            catch(IdAlreadyExists){
                cerr<<"Class 'DVD' could not be created as ID is already used!"<< endl;
            }
        }
        try {
            if (Line_i.substr(0, 3) == "Lag") {
                vector<string> LineSplitBySpace;
                string s;
                istringstream stringStream(Line_i);
                while (getline(stringStream, s, ' ')) {
                    LineSplitBySpace.push_back(s);
                }

                if (ProdukteImLager.count(stoi(LineSplitBySpace.at(1)))) {
                    throw InvalidLagerRequest();
                }
                else {
                    setProdukteImLager(stoi(LineSplitBySpace.at(1)),
                                       stoi(LineSplitBySpace.at(2)));
                }

            }
        }
        catch(InvalidLagerRequest){
            cerr<<"Warehouse Request Invalid! ID has already been assigned"<<endl;
        }
    }
}


