#include <iostream>
#include "plugin/TimeLogger.h"
#include "plugin/ShowFile.h"
#include "PluginManager.h"
#include "config.h"
int main() {
    PluginManager p({new TimeLogger("log.txt"),new ShowFile("log.txt")});
    display_time = false;
    p.doSomething();
    p.doSomething();
}
