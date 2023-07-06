#include <iostream>
#include <vector>
#include <memory>
#include "Produkte/DVD.h"
#include "Produkte/Bluray.h"
#include "FileProcessing/FileReader.h"
#include "FileProcessing/Processor.h"

int main() {

    FileReader f =  FileReader("acme.load");
    vector<string> v = f.readFile();


    return 0;
}