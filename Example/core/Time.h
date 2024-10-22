//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_TIME_H
#define EXAMPLE_TIME_H


class Time {
    long tm;
public:
    Time() : tm(0) {}
    long currentTimeMillis();
};


#endif //EXAMPLE_TIME_H
