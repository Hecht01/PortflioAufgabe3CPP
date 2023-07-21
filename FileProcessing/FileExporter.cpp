//
// Created by andyh on 21.07.2023.
//

#include "FileExporter.h"

namespace std {

    void FileExporter::exportFile(string FileName, Lager &l) {
            ofstream out (FileName);
            if(out.good()){
                vector<string> v = l.exportAll();
                for(auto i = v.begin(); i!= v.end(); i++){
                    out<<*i <<endl;
                }
            }
            else{
                cerr<<"Error404 File not Opened"<<endl;
            }
            out.close();
        }
    };
 // std