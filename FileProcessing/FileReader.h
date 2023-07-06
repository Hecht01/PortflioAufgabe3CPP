//
// Created by andyh on 06.07.2023.
//

#ifndef PORTFLIOAUFGABE3_FILEREADER_H
#define PORTFLIOAUFGABE3_FILEREADER_H
#include <iostream>
#include <vector>

namespace std {
    class FileReader {
    private:
        vector<string> lines;
        string FileName;
    public:
        FileReader(string newFileName): FileName(newFileName){};

        vector<string> readFile();
    };

} // std

#endif //PORTFLIOAUFGABE3_FILEREADER_H
