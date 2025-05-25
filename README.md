# AlgoBench – C++ Algorithm Benchmarking Tool

**AlgoBench** is a modular C++ benchmarking tool for analyzing the performance of core algorithms in a clean, production-style format. It leverages the C++ STL and `chrono` library to measure execution time with precision, simulating real-world performance evaluation in system-level roles.

---

## 🚀 Features

- 🔁 **Sorting Algorithms**: Merge Sort, Quick Sort
- 🔍 **Search Utility**: Binary Search (first occurrence)
- 🔗 **Graph Traversals**: Depth-First Search (DFS), Breadth-First Search (BFS)
- ⏱ **Benchmarking**: Uses `chrono` for accurate microsecond-level timing
- 📄 **Logging**: Outputs benchmark summaries to `benchmark_log.txt`
- 🧱 **Modular Design**: Clean header/source separation for real-world readability

---

## 🛠 File Structure

```
.
├── main.cpp          # Entry point and driver
├── sorting.cpp/hpp   # Merge Sort, Quick Sort logic
├── graph.cpp/hpp     # DFS and BFS implementations
├── utils.cpp/hpp     # Binary search, vector printer, and logger
├── benchmark_log.txt # Output file (generated after execution)
├── README.md         # Project documentation
```

---

## 📦 How to Compile & Run

```bash
g++ main.cpp sorting.cpp graph.cpp utils.cpp -o algobench
./algobench
```

---

## 🧪 Sample Output

```
Original array:
5 2 9 1 5 6

Sorted with Merge Sort:
1 2 5 5 6 9
Merge Sort Time: 10 microseconds

Sorted with Quick Sort:
1 5 7 8 9 10
Quick Sort Time: 8 microseconds

First occurrence of 5 is at index: 4

DFS from node 2: 2 3 0 1
BFS from node 2: 2 0 3 1
```

---

## 📈 Log Output

Benchmark results are also saved to:

```
benchmark_log.txt
```

---

## 📚 Use Case

AlgoBench is ideal for students, interviewees, or engineers preparing for algorithm-intensive roles, especially where performance and code structure matter — such as systems programming, backend optimization, or C++/Rust-based engineering teams.

---

## 🔧 Future Enhancements

- Add Dijkstra's algorithm for graph benchmarking
- CLI argument parsing to benchmark selected algorithms
- Integration with file input/output for larger test cases