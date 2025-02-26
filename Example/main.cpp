#include "plugin/TimeLogger.h"
#include "plugin/ShowFile.h"
#include "PluginManager.h"
#include "config.h"
#include <string>
int main() {
	std::string log = "log.txt";
    PluginManager p({new TimeLogger(log),new ShowFile(log)});
    display_time = false;
    p.doSomething();
    p.doSomething();
}
