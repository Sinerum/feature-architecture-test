//
// Created by simon on 07.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_NODE_H
#define TESTFEATUREINDUCEDARCHITECTURE_NODE_H
#include "Config.h"
#include "Color.h"
#include <compare>
class Node {
public:
    explicit Node(const int Value, const Color& color = Color::black()) : value(Value), color(color) {}

    Node(const Node &node) {
        value = node.value;
        color = node.color;
    }

    [[nodiscard]] int getValue() const { return value; }
    [[nodiscard]] Color getColor() const { if(config::Color) {
        return color;
    } else {
        return Color::black();
    } }

    std::strong_ordering operator<=>(const Node &rhs) const {
        return value <=> rhs.value;
    }

    bool operator==(const Node &rhs) const {
        return value == rhs.value && (!config::Color || color == rhs.color);
    }


private:
    Color color = Color::black();
    int value;
};


#endif //TESTFEATUREINDUCEDARCHITECTURE_NODE_H
