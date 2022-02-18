#include <iostream>
#include <vector>
#include <array>
#include <climits>

using namespace std;

struct Node {
  int p = -1;
  int d = INT_MAX;
};

using edges_t = vector<array<int, 2>>;
using graph_t = vector<edges_t>;
using edge_cb = bool(*)(vector<Node>&, int, int, int);
inline bool isNegativeCycle(vector<Node>& nodes, int u, int v, int w);
inline bool relaxNode(vector<Node>& nodes, int u, int v, int w);
bool traverseAllEdges(const graph_t& graph, vector<Node>& nodes, edge_cb cb);
bool bellmanFord(const graph_t& graph, int src, int dst, vector<int>& path);