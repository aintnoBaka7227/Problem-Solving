#include <iostream>
#include "ElevatorLimit.hpp"

int main () {
    ElevatorLimit test;
    std::vector<int> ran =  test.getRange({2}, {3} , 2);
    for (int i = 0; i < ran.size(); i++) {
        std::cout << ran[i] << " ";
    }
    return 0;
}