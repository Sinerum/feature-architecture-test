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
    std::vector<NodeTy> Nodes = {};
    std::map<NodeTy, std::vector<NodeTy>> edges = {};
public:

    void addNode(const NodeTy &Node);

    [[nodiscard]] const std::vector<NodeTy> &getNodes() const;

    void addEdge(const NodeTy &from, const NodeTy &to);

    [[nodiscard]] const std::map<NodeTy, std::vector<NodeTy>> &getEdges() const;

    [[nodiscard]] std::vector<NodeTy> getNeighbours(const NodeTy &NodeTy) const;

    [[nodiscard]] bool hasEdge(const NodeTy &from, const NodeTy &to) const;

    [[nodiscard]] Color getEdgeColor(const NodeTy &from, const NodeTy &to) const;


};


#endif //TESTFEATUREINDUCEDARCHITECTURE_GRAPH_H
