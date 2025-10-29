//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_TIME_H
#define EXAMPLE_TIME_H
#include <string>

std::string format(long value);

class Time {
    static long tm;
public:
    Time() = default;
    long currentTimeMillis();
    std::string formated();
};


#endif //EXAMPLE_TIME_H
