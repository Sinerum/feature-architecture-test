//
// Created by simon on 06.02.24.
//

#include "Modularity.h"


Modularity::Modularity() {
    if (Logger::loglevel == 1) {
        logger = std::make_unique<Logger>();
    } else if (Logger::loglevel == 2) {
        logger = std::make_unique<DebugLogger>("Modularity");
    }
}

void Modularity::doOtherStaff() {
    if(Logger::loglevel >= 1) {
        logger->log("Normal log");
    }
}
