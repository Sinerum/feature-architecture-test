//
// Created by simon on 16.10.24.
//

#include "ShowFile.h"
#include "Time.h"

void ShowFile::doSomething() {
    d.show(fs.getContent());
    if(display_time) {
        if (encrypt) {
            const auto key = "Showfile";
            Encryption::setKey(key);
        }
        d.show(Time().formated());
    }
}