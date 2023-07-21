#include <iostream>
#include <vector>
#include "Produkte/DVD.h"
#include "Produkte/Bluray.h"
#include "FileProcessing/FileReader.h"
#include "FileProcessing/Processor.h"
#include "Lager/Lager.h"
#include "FileProcessing/FileExporter.h"

int main() {

    FileReader file =  FileReader("acme.load");
    vector<string> v = file();
    Processor processor = Processor(v);
    processor();

    Lager lager = Lager();
    lager.setBlurayMap(processor.getBlurays());
    lager.setDVDMap(processor.getDVDs());
    lager.setKundenMap(processor.getKunden());
    lager.setProdukteImLager(processor.getProdukteImLager());

    lager.printAll();

    FileExporter exporter = FileExporter();
    exporter.exportFile("Lagersystem.txt", lager);

    return 0;
}