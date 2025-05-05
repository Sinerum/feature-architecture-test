//
// Created by simon on 05.05.25.
//

#ifndef EXAMPLE_ENCRYPTION_H
#define EXAMPLE_ENCRYPTION_H
#include "string"

class Encryption {
public:
    Encryption() =default;
    ~Encryption() = default;
    std::string encrypt(const std::string& data);
    static void setKey(std::string new_key);
    [[nodiscard]] static const std::string& getKey() ;
private:
    static std::string key;
};


#endif //EXAMPLE_ENCRYPTION_H
