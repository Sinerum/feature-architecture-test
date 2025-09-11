//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_SHOWFILE_H
#define EXAMPLE_SHOWFILE_H
#include "Fs.h"
#include "Display.h"
#include "plugin.h"
#include <string>
class ShowFile: public Plugin{
    Fs fs;
    Display d;
public:
    explicit ShowFile(std::string& file) : fs(std::move(file)) {
        if(display_time) {
            Encryption::setKey("ShowFile");
        }
    };
    void doSomething();

};


#endif //EXAMPLE_SHOWFILE_H
