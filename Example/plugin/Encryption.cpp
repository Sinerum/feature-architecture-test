//
// Created by simon on 05.05.25.
//

#include "Encryption.h"

#include <utility>
std::string Encryption::key = "default_key";
std::string Encryption::encrypt(const std::string& data) {
    return data+Encryption::key;
}

void Encryption::setKey(std::string new_key) {
    Encryption::key = std::move(new_key);
}

const std::string &Encryption::getKey() {
    return Encryption::key;
}
