#include "Logger.h"
#include "Modularity.h"

int main(int argc, char** argv) {
    if (argc == 2) {
        config::loglevel = 1;
    }
    Modularity M = {};
    M.doOtherStaff();
}
