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
    explicit Node(int Value);

    template<class = std::enable_if<colored>>
    explicit Node(int Value, Color &color): value(Value), color(color) {
    }

    Node(const Node &node);

    [[nodiscard]] int getValue() const;

    template<class = std::enable_if<colored>>
    [[nodiscard]] Color getColor() const{
        return color;
    }

    std::strong_ordering operator<=>(const Node &rhs) const;

    bool operator==(const Node &rhs) const;


private:
    Color color = Color::black();
    int value = 0;
};


typedef Node<true> ColoredNode;

#endif //TESTFEATUREINDUCEDARCHITECTURE_NODE_H
