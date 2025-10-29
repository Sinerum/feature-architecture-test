//
// Created by simon on 16.10.24.
//

#include "Fs.h"

#include <utility>
std::map<std::string,std::string> Fs::fileContents = {};
void Fs::loadFile(std::string name) {
    file = std::move(name);
}

void Fs::appendContent(std::string content) {
    if (encrypt)
        content = encryption->encrypt(content);
    Fs::fileContents[file] += content;
}