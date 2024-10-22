//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_FS_H
#define EXAMPLE_FS_H

#include <string>
#include <iostream>
#include "map"


class Fs {
    std::string file;
    static std::map <std::string, std::string> fileContents;
public:
    Fs(std::string name) : file(name) {}
    void loadFile(std::string name);
    std::string getContent() { return Fs::fileContents[file]; }
    std::string getFile() { return file; }

    void setContent(std::string content) { Fs::fileContents[file] = content; }
    void appendContent(std::string content);
};


#endif //EXAMPLE_FS_H
