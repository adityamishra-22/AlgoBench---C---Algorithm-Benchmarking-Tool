# AlgoBench – C++ Algorithm Benchmarking Tool

**AlgoBench** is a modular C++ benchmarking tool that evaluates the runtime performance of core algorithms. It features a clean command-line interface and uses STL + `chrono` to simulate production-style performance profiling.

---

## 🚀 Features

- 🔁 **Sorting Algorithms**: Merge Sort, Quick Sort
- 🔍 **Search**: Binary Search (first occurrence)
- 🔗 **Graph Traversals**: DFS, BFS using adjacency list
- ⏱ **Benchmarking**: Uses `chrono` for microsecond-level timing
- 📄 **Logging**: Logs benchmarks to `benchmark_log.txt`
- 🧱 **Modular Design**: Clean `.cpp/.hpp` separation

---

## 🛠 File Structure

```
.
├── main.cpp          # Entry point and driver
├── sorting.cpp/hpp   # Merge Sort, Quick Sort
├── graph.cpp/hpp     # DFS, BFS
├── utils.cpp/hpp     # Binary Search, print/logging utilities
├── benchmark_log.txt # Output log (auto-generated)
├── README.md         # This file
```

---

## 📦 Compile & Run

```bash
g++ main.cpp sorting.cpp graph.cpp utils.cpp -o algobench
./algobench
```

---

## 🧪 Sample Output

```
Original array (Merge Sort):
5 2 9 1 5 6
Sorted with Merge Sort:
1 2 5 5 6 9
Merge Sort Time: 4 microseconds

Original array (Quick Sort):
10 7 8 9 1 5
Sorted with Quick Sort:
1 5 7 8 9 10
Quick Sort Time: 3 microseconds

Binary Search input array:
1 2 3 4 5 5 6
Binary Search (first occurrence of 5): Index 4
Binary Search Time: 1 microsecond

Graph Traversal Input (Adjacency List):
0: 1 2
1: 2
2: 0 3
3: 3
DFS from node 2: 2 3 0 1
DFS Time: 2 microseconds
BFS from node 2: 2 0 3 1
BFS Time: 3 microseconds
```

---

## 📚 Use Case

Perfect for algorithm enthusiasts, students preparing for systems interviews, or engineers building performance-sensitive applications in C++.

---

## 🔧 Future Enhancements

- Add Dijkstra’s Algorithm benchmarking
- Command-line selection for algorithms
- File-based input/output for large data handling
