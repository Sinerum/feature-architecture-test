//
// Created by simon on 16.10.24.
//

#include "Fs.h"

std::map<std::string,std::string> Fs::fileContents = {};
void Fs::loadFile(std::string name) {
    file = name;
}

void Fs::appendContent(std::string content) {
     Fs::fileContents[file] += encryptContent(content);
        std::cout << "Fs::appendContent " << content;

}