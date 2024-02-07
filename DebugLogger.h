//
// Created by simon on 07.02.24.
//
#ifndef TESTFEATUREINDUCEDARCHITECTURE_DEBUGLOGGER_H
#define TESTFEATUREINDUCEDARCHITECTURE_DEBUGLOGGER_H

#include "Logger.h"

#include <utility>

class DebugLogger : public Logger  {
public:
    explicit DebugLogger(std::string context) : Logger() , context(std::move(context)) {};
    void log(const std::string& log) override {
        std::cout<<context<<":"<<log;
    }
private:
    std::string context;
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_DEBUGLOGGER_H
