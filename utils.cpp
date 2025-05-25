#include "utils.hpp"
#include <fstream>

void printVector(const std::vector<int>& vec) {
    for (int val : vec) std::cout << val << " ";
    std::cout << std::endl;
}

int binarySearchFirst(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

void logToFile(const std::string& message, const std::string& filename) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << message << std::endl;
        file.close();
    }
}

void printGraph(const std::unordered_map<int, std::vector<int>>& graph) {
    std::cout << "Graph Adjacency List:" << std::endl;
    for (const auto& pair : graph) {
    int node = pair.first;
    const std::vector<int>& neighbors = pair.second;

    std::cout << node << ": ";
    for (int n : neighbors)
        std::cout << n << " ";
    std::cout << std::endl;
}

}