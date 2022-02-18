#include "bellman-ford.hpp"

int main() {

  graph_t graph(5, edges_t(3));

  graph[0] = {{1, 6}, {3, 7}};
  graph[1] = {{2, 5}, {3, 8}, {4, -4}};
  graph[2] = {{1, -2}};
  graph[3] = {{2, -3}, {4, 9}};
  graph[4] = {{0, 2}, {2, 7}};

  vector<int> path;

  if (bellmanFord(graph, 0, 2, path)) {
    for (const int& v : path) {
      cout << v << ' ';
    }
  } else {
      cout << "ciclo negativo detectado\n";
  }
}