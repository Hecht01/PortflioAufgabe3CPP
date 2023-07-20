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
                    shared_ptr<Kunde> newKunde = make_shared<Kunde>(stoi(LineSplitBySpace.at(1)),
                                                                    LineSplitBySpace.at(2),
                                                                    LineSplitBySpace.at(3));
                    Kunden.push_back(newKunde);
                    LineSplitBySpace.clear();
                } else {
                    throw ClassNotCreatable();
                }
            }
            catch(ClassNotCreatable){
                cerr<<"Class not creatable do to unexpected Input!"<<endl;
            }

        }
        if(Line_i.substr(0,3) == "Blu"){

        }
        if(Line_i.substr(0,3) == "DVD"){

        }
    }
}
