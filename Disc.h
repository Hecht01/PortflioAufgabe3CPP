//
// Created by andyh on 21.06.2023.
//

#ifndef PORTFLIOAUFGABE3_DISC_H
#define PORTFLIOAUFGABE3_DISC_H
#include <string>

using namespace std;

    class Disc {
    protected:
        int ProduktID;
        int Anzahl;
        string Titel;


    public:
        Disc(string newTitel, int newProduktID):
        ProduktID(newProduktID),Titel(newTitel){};
        void setProduktID(int newProduktID){
            ProduktID = newProduktID;
        };
        int getProduktID(){
            return ProduktID;
        };
        void setTitel(string newTitel){
            Titel = newTitel;
        };
        string getTitel(){
            return Titel;
        };
        virtual string to_String() {
            return "Not Implemented";
        };

    };


#endif //PORTFLIOAUFGABE3_DISC_H
