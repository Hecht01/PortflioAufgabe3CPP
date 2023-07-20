cmake_minimum_required(VERSION 3.24)
project(PortflioAufgabe3)

set(CMAKE_CXX_STANDARD 23)

add_executable(PortflioAufgabe3 main.cpp Produkte/Disc.h Produkte/DVD.h Produkte/DVD.cpp Produkte/Bluray.cpp Produkte/Bluray.h FileProcessing/FileReader.cpp FileProcessing/FileReader.h Lagersystem.cpp Lagersystem.h)
