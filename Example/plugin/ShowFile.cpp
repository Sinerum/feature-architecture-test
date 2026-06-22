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
    std::string content;
    if(display_time) {
        if (encrypt) {
            const auto key = "Showfile";
            Encryption::setKey(key);
            content.append("encrypted");
        }
        auto time = Time().formated();
        d.show(time);
    }
    d.show(fs.getContent());
}