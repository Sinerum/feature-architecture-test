//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_TIME_H
#define EXAMPLE_TIME_H


class Time {
    static long tm;
public:
    Time() = default;
    long currentTimeMillis();
};


#endif //EXAMPLE_TIME_H
