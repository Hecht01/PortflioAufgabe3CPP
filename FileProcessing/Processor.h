//
// Created by andyh on 06.07.2023.
//

#ifndef PORTFLIOAUFGABE3_PROCESSOR_H
#define PORTFLIOAUFGABE3_PROCESSOR_H

#include <string>
#include <vector>

namespace std {

    class Processor {
    private:
        vector<string> lines;
    public:
        Processor(vector<string> FileInLines): lines(FileInLines){};
        vector<vector<string>> Process();
        vector<vector<string>> operator()(){
            return Process();
        };


    };
int countSpaces(string toSearch);
} // std

#endif //PORTFLIOAUFGABE3_PROCESSOR_H
