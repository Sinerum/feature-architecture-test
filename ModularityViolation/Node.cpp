//
// Created by simon on 07.02.24.
//

#include "Node.h"
template<bool colored>
Node<colored>::Node(int Value)  : value(Value) {}

template<bool colored>
Node<colored>::Node(const Node &node) {

}
template<bool colored>
template<std::enable_if_t<colored, bool>>
Node<colored>::Node(int Value, Color &color): value(Value), color(color) {

}
template<bool colored>
int Node<colored>::getValue() const {
    return 0;
}
template<bool colored>
template<std::enable_if_t<colored, bool>>
Color Node<colored>::getColor() const {
    return color;
}
template<bool colored>
std::strong_ordering Node<colored>::operator<=>(const Node &rhs) const {
    return value <=> rhs.value;
}
template<bool colored>
bool Node<colored>::operator==(const Node &rhs) const {
    return value == rhs.value && (!colored || color == rhs.color);
}