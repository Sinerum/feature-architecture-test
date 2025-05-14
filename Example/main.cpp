#include "plugin/TimeLogger.h"
#include "plugin/ShowFile.h"
#include "PluginManager.h"
#include "config.h"
#include <string>
bool display_time = false;
bool encrypt = true;

int main() {
	std::string log = "log.txt";
    PluginManager p({new TimeLogger(log),new ShowFile(log)});
    p.doSomething();
    p.doSomething();
}
