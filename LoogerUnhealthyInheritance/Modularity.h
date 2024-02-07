//
// Created by simon on 06.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_MODULARITY_H
#define TESTFEATUREINDUCEDARCHITECTURE_MODULARITY_H

#include "Logger.h"
#include "DebugLogger.h"
#include <memory>

class Modularity {
public:
    Modularity();
    void doOtherStaff();
    std::unique_ptr<Logger> logger;
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_MODULARITY_H
