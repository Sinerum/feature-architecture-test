//
// Created by simon on 16.10.24.
//

#include "ShowFile.h"
#include "Time.h"

ShowFile::ShowFile(std::string &file, Display &d) : fs(std::move(file)), d(d) {
    if(display_time) {
        const auto key = "Showfile";
        Encryption::setKey(key);
    }
};



void ShowFile::doSomething() {
    if(display_time) {
        if (encrypt) {
            const auto key = "Showfile";
            Encryption::setKey(key);
        }
        d.show(Time().formated());
    }
    d.show(fs.getContent());
}