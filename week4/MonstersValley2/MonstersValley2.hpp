#pragma once
#include <iostream>
#include <vector>

class MonstersValley2 {
    private:
    int backtracking(std::vector<int> dread, std::vector<int> price, int bribe, int strength, int index) {
        
    }
    public:
    int minimumPrice(std::vector<int> dread, std::vector<int> price) {
        return backtracking(dread, price, 0, 0, 0);
    }
};