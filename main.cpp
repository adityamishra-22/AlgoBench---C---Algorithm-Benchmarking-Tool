#include <iostream>
#include "sorting.hpp"
#include "utils.hpp"
#include "graph.hpp"

int main() {
    // Merge Sort
    std::vector<int> merge_input = {5, 2, 9, 1, 5, 6};
    std::cout << "Original array (Merge Sort):\n";
    printVector(merge_input);

    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(merge_input, 0, merge_input.size() - 1);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Sorted with Merge Sort:\n";
    printVector(merge_input);
    std::cout << "Merge Sort Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    // Quick Sort
    std::vector<int> quick_input = {10, 7, 8, 9, 1, 5};
    std::cout << "\nOriginal array (Quick Sort):\n";
    printVector(quick_input);

    start = std::chrono::high_resolution_clock::now();
    quickSort(quick_input, 0, quick_input.size() - 1);
    end = std::chrono::high_resolution_clock::now();

    std::cout << "Sorted with Quick Sort:\n";
    printVector(quick_input);
    std::cout << "Quick Sort Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    // Binary Search
    std::vector<int> bs_input = {1, 2, 3, 4, 5, 5, 6};
    std::cout << "\nBinary Search input array:\n";
    printVector(bs_input);

    start = std::chrono::high_resolution_clock::now();
    int pos = binarySearchFirst(bs_input, 5);
    end = std::chrono::high_resolution_clock::now();

    std::cout << "Binary Search (first occurrence of 5): Index " << pos << "\n";
    std::cout << "Binary Search Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    // Graph Traversal
    std::unordered_map<int, std::vector<int>> graph = {
        {0, {1, 2}}, {1, {2}}, {2, {0, 3}}, {3, {3}}
    };

    std::cout << "\nGraph Traversal Input (Adjacency List):\n";
    printGraph(graph);

    start = std::chrono::high_resolution_clock::now();
    std::cout << "DFS from node 2: ";
    dfs(2, graph);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "DFS Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    start = std::chrono::high_resolution_clock::now();
    std::cout << "BFS from node 2: ";
    bfs(2, graph);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "BFS Time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    logToFile("All benchmarks completed successfully.");
    return 0;
}
