//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_FS_H
#define EXAMPLE_FS_H

#include <string>
#include <iostream>
#include <map>

#include <optional>
#include <utility>

#include "Encryption.h"
extern bool encrypt;
class Fs {
    std::string file;
    static std::map <std::string, std::string> fileContents;
    std::optional<Encryption> encryption;
public:
    Fs(std::string name) : file(std::move(name)) {
        if(encrypt)
            encryption = Encryption();
    }
    bool isEncrypted() {
        return encryption.has_value();
    }
    void loadFile(std::string name);
    std::string getContent() { return Fs::fileContents[file]; }
    std::string getFile() { return file; }

    void setContent(std::string content) {
        if(encryption.has_value())
            content=  encryption->encrypt(content);
    Fs::fileContents[file] = content; }

    void appendContent(std::string content);
};


#endif //EXAMPLE_FS_H
