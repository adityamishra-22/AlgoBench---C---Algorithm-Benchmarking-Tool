#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>
#include <iostream>
#include <chrono>
#include <string>

void printVector(const std::vector<int>& vec);
int binarySearchFirst(const std::vector<int>& arr, int target);
void logToFile(const std::string& message, const std::string& filename = "benchmark_log.txt");

#endif