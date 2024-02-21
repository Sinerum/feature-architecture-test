#include "Logger.h"
#include "Foo.h"
#include "Modularity.h"

int main(int argc, char** argv) {
    if (argc == 2) {
        loglevel = 1;
    }
    Foo Test = {};
    Test.dostuff();
    Modularity M = {};
    M.doOtherStaff();
}
