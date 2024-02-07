//
// Created by simon on 01.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_FOO_H
#define TESTFEATUREINDUCEDARCHITECTURE_FOO_H

#include "Logger.h"
class Foo {

public:
    void dostuff() {
        if (Logger::loglevel == 1) {
            Logger::log("Foo Test");
        }
    }
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_FOO_H
