//
// Created by simon on 06.02.24.
//

#include "Modularity.h"
#include "Logger.h"

Modularity::Modularity() {
    if (config::loglevel == 1) {
        logger = std::make_unique<Logger>();
    } else if (config::loglevel == 2) {
        logger = std::make_unique<DebugLogger>("Modularity");
    }
}

void Modularity::doOtherStaff() {
    if(config::loglevel >= 1) {
        logger->log("Normal log");
    }
}
