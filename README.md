# AlgoBench – C++ Algorithm Benchmarking Tool

AlgoBench is a command-line benchmarking suite for comparing the performance of algorithms like Merge Sort, Quick Sort, DFS, BFS, and Binary Search.

## Features
- Modular C++ STL structure
- Sorting & graph algorithms with `chrono` benchmarking
- Binary search variants
- Logging to file

## Compile & Run

```bash
g++ main.cpp sorting.cpp utils.cpp graph.cpp -o algobench
./algobench
```