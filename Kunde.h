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
        string Name;
        int Kundennummer;
        string Addresse;
    public:
        Kunde(int Kundennummer, string Name, string Addresse):
                Kundennummer(Kundennummer), Addresse(Addresse),
                Name(Name){};
        string to_String();
        friend ostream& operator<<(ostream& os, Kunde& k);
    };

} // std

#endif //PORTFLIOAUFGABE3_KUNDE_H
