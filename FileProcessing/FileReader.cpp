//
// Created by andyh on 06.07.2023.
//

#include "FileReader.h"
#include <fstream>
namespace std {
    vector<string> FileReader::readFile() {
        vector<string> v;
        fstream fs (FileName, std::fstream::in);
        if(fs.good()){
            string line;
            while (getline(fs, line)) {
                v.push_back(line);
            }
        }
        else{
            cerr<<"Error404 File not Found"<<endl;
        }
        fs.close();
        return v;
    }
} // std