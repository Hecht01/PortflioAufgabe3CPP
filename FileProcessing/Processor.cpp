//
// Created by andyh on 06.07.2023.
//

#include "Processor.h"


namespace std {

    int countSpaces(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == ' ') count++;
        return count;
    }

    vector<vector<string>> Processor::Process() {
        vector<vector<string>> ProcessedFile;
        for(int i = 0; i < lines.size(); i++){
            string temp = lines.at(i);
            vector<string> v;
            for(int i = 0; i < countSpaces(temp); i++){
                int posSpace = temp.find(" ");
                v.push_back(temp.substr(0,posSpace));
                temp = temp.substr(posSpace);
            }
            ProcessedFile.push_back(v);
        }
        return ProcessedFile;
    }


} // std