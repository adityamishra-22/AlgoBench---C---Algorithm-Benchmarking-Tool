#include <iostream>
#include "sorting.hpp"
#include "utils.hpp"
#include "graph.hpp"

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};
    std::cout << "Original array:\n";
    printVector(data);

    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(data, 0, data.size() - 1);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "\nSorted with Merge Sort:\n";
    printVector(data);
    std::cout << "Merge Sort Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    std::vector<int> data2 = {10, 7, 8, 9, 1, 5};
    start = std::chrono::high_resolution_clock::now();
    quickSort(data2, 0, data2.size() - 1);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "\nSorted with Quick Sort:\n";
    printVector(data2);
    std::cout << "Quick Sort Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    std::vector<int> sorted = {1, 2, 3, 4, 5, 5, 6};
    int pos = binarySearchFirst(sorted, 5);
    std::cout << "\nFirst occurrence of 5 is at index: " << pos << "\n";

    std::unordered_map<int, std::vector<int>> graph = {
        {0, {1, 2}}, {1, {2}}, {2, {0, 3}}, {3, {3}}
    };

    std::cout << "\nDFS from node 2: ";
    dfs(2, graph);

    std::cout << "BFS from node 2: ";
    bfs(2, graph);

    logToFile("Benchmarks completed successfully.");

    return 0;
}