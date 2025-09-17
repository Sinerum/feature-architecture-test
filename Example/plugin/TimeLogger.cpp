//
// Created by simon on 16.10.24.
//

#include "TimeLogger.h"

void TimeLogger::doSomething() {
    if(encrypt) {
        Encryption::setKey("TimeLogger");
    }
    fs.appendContent(std::to_string(t.currentTimeMillis()));
}