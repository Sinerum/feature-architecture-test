//
// Created by simon on 01.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
#define TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
#include "iostream"

class logger {
public:
    static int loglevel;
    static void log(const std::string& log) { std::cout << log;}
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
