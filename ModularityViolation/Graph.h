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
template <bool colored>
class Graph {
    typedef Node<colored> NodeTy;
    std::vector<NodeTy> NodeTys;
    std::map<NodeTy, std::vector<NodeTy>> edges;
public:

    void addNodeTy(const NodeTy &NodeTy) {
        NodeTys.push_back(NodeTy);
    }

    [[nodiscard]] const std::vector<NodeTy> &getNodeTys() const {
        return NodeTys;
    }

    void addEdge(const NodeTy &from, const NodeTy &to) {
        edges[from].push_back(to);
    }

    [[nodiscard]] const std::map<NodeTy, std::vector<NodeTy>> &getEdges() const {
        return edges;
    }

    [[nodiscard]] std::vector<NodeTy> getNeighbours(const NodeTy &NodeTy) const {
        return edges.at(NodeTy);
    }

    [[nodiscard]] bool hasEdge(const NodeTy &from, const NodeTy &to) const {
        return std::find(edges.at(from).begin(), edges.at(from).end(), to) != edges.at(from).end();
    }

    [[nodiscard]] Color getEdgeColor(const NodeTy &from, const NodeTy &to) const {
        if(!hasEdge(from, to)) throw std::invalid_argument("No edge from " + std::to_string(from.getValue()) + " to " + std::to_string(to.getValue()));
        if(colored) {
            Color fromColor = NodeTys.at(from.getValue()).getColor();
            Color toColor = NodeTys.at(to.getValue()).getColor();
            return {(fromColor.getR() + toColor.getR()) / 2, (fromColor.getG() + toColor.getG()) / 2,
                         (fromColor.getB() + toColor.getB()) / 2};
        } else {
            return Color::black();
        }
    }


};


#endif //TESTFEATUREINDUCEDARCHITECTURE_GRAPH_H
