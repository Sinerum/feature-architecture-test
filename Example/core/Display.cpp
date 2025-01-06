//
// Created by simon on 16.10.24.
//

#include "Display.h"
#include "Time.h"
#include <iostream>
void Display::show(std::string content) {
    std::cout << "Display::show " << std::endl;
    for(int i = 0; i < content.length() + 2; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    std::cout << "|" << content << "|"  << std::endl;
    if(display_time) {
        std::cout << "|" << "Time: " << Time().currentTimeMillis() << "|" << std::endl;
    }
    for(int i = 0; i < content.length() + 2; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void testDisplay() {
    Display d;
    d.show("Hello World");
}