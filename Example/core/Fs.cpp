//
// Created by simon on 16.10.24.
//

#include "Fs.h"

std::map<std::string,std::string> Fs::fileContents = {};
void Fs::loadFile(std::string name) {
    file = name;
}

void Fs::appendContent(std::string content) {
    if (encryption.has_value())
        content = encryption->encrypt(content);
     Fs::fileContents[file] += content;
        std::cout << "Fs::appendContent " << content;

}