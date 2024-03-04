//
// Created by simon on 01.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
#define TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
#include "iostream"
class Logger {
public:
    virtual void log(const std::string& log) { std::cout << log;}
};
namespace config {
    static int loglevel = 0;
}
#endif //TESTFEATUREINDUCEDARCHITECTURE_LOGGER_H
