#include "plugin/TimeLogger.h"
#include "plugin/ShowFile.h"
#include "config.h"
#include <string>

bool display_time = false;
bool encrypt = true;

int main(int argc,char* argv[]) {
	auto d = Display();
	std::string log = "log.txt";
    auto timeLogger = TimeLogger(log);
	auto FileDisplay = ShowFile(log,d);
}
