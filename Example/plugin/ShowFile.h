//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_SHOWFILE_H
#define EXAMPLE_SHOWFILE_H
#include "Fs.h"
#include "Display.h"
#include <string>
#include "../config.h"
class ShowFile {
    Fs fs;
    Display d;
public:
    explicit ShowFile(std::string& file,Display& d) : fs(std::move(file)), d(d) {
        if(display_time) {
            const auto key = "Showfile";
            Encryption::setKey(key);
        }
    };
    void doSomething();

};


#endif //EXAMPLE_SHOWFILE_H
