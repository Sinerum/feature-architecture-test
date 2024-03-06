#include "Modularity.h"

int main(int argc, char** argv) {
    int loglevel = 0;
    if (argc == 2) {
        loglevel = 1;
    }
    Modularity M = {loglevel};
    M.doOtherStaff();
}
