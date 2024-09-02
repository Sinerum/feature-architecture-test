//
// Created by simon on 07.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_NODE_H
#define TESTFEATUREINDUCEDARCHITECTURE_NODE_H
#include "Color.h"
#include <compare>
template <bool colored>
class Node {
public:
    explicit Node(int Value) : value(Value) {}

    template<std::enable_if_t<colored,bool> = true>
    explicit Node(int Value, Color &color) : value(Value), color(color) {}

    Node(const Node &node) {
        value = node.value;
        color = node.color;
    }

    [[nodiscard]] int getValue() const { return value; }

    template<std::enable_if_t<colored,bool> = true>
    [[nodiscard]] Color getColor() const {
        return color;
    }

    std::strong_ordering operator<=>(const Node &rhs) const {
        return value <=> rhs.value;
    }

    bool operator==(const Node &rhs) const {
        return value == rhs.value && (!colored || color == rhs.color);
    }


private:
    Color color = Color::black();
    int value = 0;
};

typedef Node<true> ColoredNode;

#endif //TESTFEATUREINDUCEDARCHITECTURE_NODE_H
