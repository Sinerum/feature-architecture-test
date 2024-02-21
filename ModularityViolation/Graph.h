//
// Created by simon on 07.02.24.
//

#ifndef TESTFEATUREINDUCEDARCHITECTURE_GRAPH_H
#define TESTFEATUREINDUCEDARCHITECTURE_GRAPH_H


#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include "Node.h"

class Graph {
    std::vector<Node> nodes;
    std::map<Node, std::vector<Node>> edges;
public:
    void addNode(const Node &node) {
        nodes.push_back(node);
    }

    [[nodiscard]] const std::vector<Node> &getNodes() const {
        return nodes;
    }

    void addEdge(const Node &from, const Node &to) {
        edges[from].push_back(to);
    }

    [[nodiscard]] const std::map<Node, std::vector<Node>> &getEdges() const {
        return edges;
    }

    [[nodiscard]] std::vector<Node> getNeighbours(const Node &node) const {
        return edges.at(node);
    }

    [[nodiscard]] bool hasEdge(const Node &from, const Node &to) const {
        return std::find(edges.at(from).begin(), edges.at(from).end(), to) != edges.at(from).end();
    }

    [[nodiscard]] Color getEdgeColor(const Node &from, const Node &to) const {
        if(!hasEdge(from, to)) throw std::invalid_argument("No edge from " + std::to_string(from.getValue()) + " to " + std::to_string(to.getValue()));
        if(config::Color) {
            Color fromColor = nodes.at(from.getValue()).getColor();
            Color toColor = nodes.at(to.getValue()).getColor();
            return {(fromColor.getR() + toColor.getR()) / 2, (fromColor.getG() + toColor.getG()) / 2,
                         (fromColor.getB() + toColor.getB()) / 2};
        } else {
            return Color::black();
        }
    }


};


#endif //TESTFEATUREINDUCEDARCHITECTURE_GRAPH_H
