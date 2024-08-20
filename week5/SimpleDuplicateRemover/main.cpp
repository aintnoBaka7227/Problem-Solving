#include "SimpleDuplicateRemover.hpp"

// Utility function to print arrays
void printArray(const std::vector<int>& arr) {
    std::cout << "{ ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i < arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " }" << std::endl;
}

int main() {
    SimpleDuplicateRemover remover;

    // Test case 0
    std::vector<int> test0 = {1, 5, 5, 1, 6, 1};
    std::vector<int> result0 = remover.process(test0);
    std::cout << "Test Case 0: ";
    printArray(result0); // Expected: {5, 6, 1}

    // Test case 1
    std::vector<int> test1 = {2, 4, 2, 4, 4};
    std::vector<int> result1 = remover.process(test1);
    std::cout << "Test Case 1: ";
    printArray(result1); // Expected: {2, 4}

    // Test case 2
    std::vector<int> test2 = {6, 6, 6, 6, 6, 6};
    std::vector<int> result2 = remover.process(test2);
    std::cout << "Test Case 2: ";
    printArray(result2); // Expected: {6}

    // Test case 3
    std::vector<int> test3 = {1, 2, 3, 4, 2, 2, 3};
    std::vector<int> result3 = remover.process(test3);
    std::cout << "Test Case 3: ";
    printArray(result3); // Expected: {1, 4, 2, 3}

    // Test case 4
    std::vector<int> test4 = {100, 100, 100, 99, 99, 99, 100, 100, 100};
    std::vector<int> result4 = remover.process(test4);
    std::cout << "Test Case 4: ";
    printArray(result4); // Expected: {99, 100}

    return 0;
}