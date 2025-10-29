//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_TIMELOGGER_H
#define EXAMPLE_TIMELOGGER_H
#include <utility>
#include <string>
#include "Fs.h"
#include "Time.h"
class TimeLogger {
    Fs fs;
    Time t;
public:
    explicit TimeLogger(std::string& file) : fs(std::move(file)) {
    };
    void doSomething();
};


#endif //EXAMPLE_TIMELOGGER_H
