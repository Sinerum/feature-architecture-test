//
// Created by simon on 01.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_FOO_H
#define TESTFEATUREINDUCEDARCHITECTURE_FOO_H

#include "logger.h"
class foo {

public:
    void dostuff() {
        if (logger::loglevel == 1) {
            logger::log("Foo Test");
        }
    }
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_FOO_H
