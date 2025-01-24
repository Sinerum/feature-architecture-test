//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_TIMELOGGER_H
#define EXAMPLE_TIMELOGGER_H
#include <utility>
#include <string>
#include "plugin.h"
#include "Fs.h"
#include "Time.h"
class TimeLogger: public Plugin {
    Fs fs;
    Time t;
public:
    explicit TimeLogger(std::string file) : fs(std::move(file)) {};
    void doSomething() override;
};


#endif //EXAMPLE_TIMELOGGER_H
