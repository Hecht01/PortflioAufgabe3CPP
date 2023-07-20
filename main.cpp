#include <iostream>
#include <vector>
#include "Produkte/DVD.h"
#include "Produkte/Bluray.h"
#include "FileProcessing/FileReader.h"


int main() {

    FileReader file =  FileReader("acme.load");
    vector<string> v = file();

    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" "<< endl;
    }

    return 0;
}