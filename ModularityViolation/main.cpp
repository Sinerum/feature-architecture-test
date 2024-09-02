#include "Graph.h"

int main(int argc, char** argv) {
    Graph<true> test = {};
    Color r = Color(255,0,0);
    Color orange = Color(125,125,100);
    ColoredNode a(0,r);
    ColoredNode b(0,orange);
    test.addNode(a);
    test.addNode(b);
    test.addEdge(a,b);
}
