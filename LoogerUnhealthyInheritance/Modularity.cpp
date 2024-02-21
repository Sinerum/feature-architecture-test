//
// Created by simon on 06.02.24.
//

#include "Modularity.h"


Modularity::Modularity() {
    if (loglevel == 1) {
        logger = std::make_unique<Logger>();
    } else if (loglevel == 2) {
        logger = std::make_unique<DebugLogger>("Modularity");
    }
}

void Modularity::doOtherStaff() {
    if(loglevel >= 1) {
        logger->log("Normal log");
    }
}
