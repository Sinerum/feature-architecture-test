//
// Created by simon on 16.10.24.
//

#include "Time.h"

long Time::currentTimeMillis() {
    tm++;
    return tm;
}