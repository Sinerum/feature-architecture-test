//
// Created by simon on 05.05.25.
//

#include "Encryption.h"

#include <utility>
std::string Encryption::key = "default_key";
std::string Encryption::encrypt(const std::string& data) {
    return data+key;
}

void Encryption::setKey(std::string new_key) {
    key = std::move(new_key);
}

const std::string &Encryption::getKey() {
    return key;
}
