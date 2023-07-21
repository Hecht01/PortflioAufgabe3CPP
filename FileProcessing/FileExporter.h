//
// Created by andyh on 21.07.2023.
//

#ifndef PORTFLIOAUFGABE3_FILEEXPORTER_H
#define PORTFLIOAUFGABE3_FILEEXPORTER_H
#include <string>
#include <fstream>
#include "../Lager/Lager.h"


namespace std {

    class FileExporter {
    public:
        FileExporter(){};
        void exportFile(string FileName, Lager& l);
    };

} // std

#endif //PORTFLIOAUFGABE3_FILEEXPORTER_H
