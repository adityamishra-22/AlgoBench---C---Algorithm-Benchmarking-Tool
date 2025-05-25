#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>

void dfs(int start, const std::unordered_map<int, std::vector<int>>& graph);
void bfs(int start, const std::unordered_map<int, std::vector<int>>& graph);

#endif