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