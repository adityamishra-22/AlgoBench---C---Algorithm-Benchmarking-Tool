#include "graph.hpp"
#include <unordered_set>
#include <stack>
#include <queue>
#include <iostream>

void dfs(int start, const std::unordered_map<int, std::vector<int>>& graph) {
    std::unordered_set<int> visited;
    std::stack<int> s;
    s.push(start);
    while (!s.empty()) {
        int node = s.top(); s.pop();
        if (!visited.count(node)) {
            std::cout << node << " ";
            visited.insert(node);
            for (int neighbor : graph.at(node)) {
                s.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}

void bfs(int start, const std::unordered_map<int, std::vector<int>>& graph) {
    std::unordered_set<int> visited;
    std::queue<int> q;
    q.push(start);
    visited.insert(start);
    while (!q.empty()) {
        int node = q.front(); q.pop();
        std::cout << node << " ";
        for (int neighbor : graph.at(node)) {
            if (!visited.count(neighbor)) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}