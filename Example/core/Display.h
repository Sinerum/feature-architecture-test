//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_DISPLAY_H
#define EXAMPLE_DISPLAY_H

#include <string>
extern bool display_time;
class Display {
public:
    void show(std::string content);
    void displayTime();
};


#endif //EXAMPLE_DISPLAY_H
