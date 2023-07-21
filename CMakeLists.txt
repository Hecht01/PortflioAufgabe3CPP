cmake_minimum_required(VERSION 3.24)
project(PortflioAufgabe3)

set(CMAKE_CXX_STANDARD 23)

add_executable(PortflioAufgabe3 main.cpp Produkte/Disc.h Produkte/DVD.h Produkte/DVD.cpp Produkte/Bluray.cpp Produkte/Bluray.h FileProcessing/FileReader.cpp FileProcessing/FileReader.h FileProcessing/Processor.cpp FileProcessing/Processor.h Kunde/Kunde.cpp Kunde/Kunde.h Lager/Lager.cpp Lager/Lager.h FileProcessing/FileExporter.cpp FileProcessing/FileExporter.h)
