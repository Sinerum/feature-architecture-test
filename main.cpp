#include "logger.h"
#include "foo.h"
#include "modularity.h"

int main(int argc, char** argv) {
    if (argc == 2) {
        logger::loglevel = 1;
    }
    foo Test = {};
    Test.dostuff();
    modularity M = {};
    M.doOtherStaff();

}
