//
// Created by simon on 16.10.24.
//

#include "ShowFile.h"
#include "Time.h"

void ShowFile::doSomething() {
    d.show(fs.getContent());
    if(display_time) {
        d.show(std::to_string(Time().currentTimeMillis()));
    }
}