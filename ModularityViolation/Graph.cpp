//
// Created by simon on 07.02.24.
//

#include "Graph.h"

template<bool colored>
void Graph<colored>::addNode(const Graph::NodeTy &Node){
    Nodes.push_back(Node);
}

template<bool colored>
const std::vector<Node<colored>> &Graph<colored>::getNodes() const {
    return Nodes;
}
template<bool colored>
void Graph<colored>::addEdge(const Graph::NodeTy &from, const Graph::NodeTy &to) {
    edges[from].push_back(to);
}

template<bool colored>
const std::map<Node<colored>, std::vector<Node<colored>>> &Graph<colored>::getEdges() const {
    return edges;
}

template<bool colored>
std::vector<Node<colored>> Graph<colored>::getNeighbours(const Graph::NodeTy &NodeTy) const  {
    return edges.at(NodeTy);
}

template<bool colored>
bool Graph<colored>::hasEdge(const Graph::NodeTy &from, const Graph::NodeTy &to) const {
    return std::find(edges.at(from).begin(), edges.at(from).end(), to) != edges.at(from).end();
}

template<bool colored>
Color Graph<colored>::getEdgeColor(const Graph::NodeTy &from, const Graph::NodeTy &to) const {
    if(!hasEdge(from, to)) throw std::invalid_argument("No edge from " + std::to_string(from.getValue()) + " to " + std::to_string(to.getValue()));
    if(colored) {
        Color fromColor = Nodes.at(from.getValue()).getColor();
        Color toColor = Nodes.at(to.getValue()).getColor();
        return {(fromColor.getR() + toColor.getR()) / 2, (fromColor.getG() + toColor.getG()) / 2,
                (fromColor.getB() + toColor.getB()) / 2};
    } else {
        return Color::black();
    }
}