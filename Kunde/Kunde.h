//
// Created by andyh on 20.07.2023.
//

#ifndef PORTFLIOAUFGABE3_KUNDE_H
#define PORTFLIOAUFGABE3_KUNDE_H
#include <string>
#include <vector>

namespace std {

    class Kunde {
    private:
        int Kundennummer;
        string Name;
        string Vorname;
        string Addresse;
        string Hausnummer;
        string Postleitzahl;
        string Ort;
    public:
        Kunde(int Kundennummer, string Name, string Vorname,
              string Addresse, string Hausnummer,
              string Postleitzahl, string Ort):
                Kundennummer(Kundennummer), Name(Name),
                Addresse(Addresse), Vorname(Vorname),
                Hausnummer(Hausnummer),Postleitzahl(Postleitzahl),
                Ort(Ort){};
        string to_String();
        int getId(){
            return Kundennummer;
        }
        string getName(){
            return Name;
        }
        friend ostream& operator<<(ostream& os, Kunde& k);
    };

} // std

#endif //PORTFLIOAUFGABE3_KUNDE_H
