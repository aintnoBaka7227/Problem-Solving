#pragma once
#include <iostream>
#include <vector>

class MonstersValley2 {
    private:
    int backtracking(std::vector<int> dread, std::vector<int> price, int bribe, int strength, int index) {
        if (index == dread.size()) {
            return bribe;
        }
        if (strength < dread[index]) {
            return backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1);
        }
        return std::min(backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1), backtracking(dread, price, bribe, strength, index + 1));

    }
    public:
    int minimumPrice(std::vector<int> dread, std::vector<int> price) {
        return backtracking(dread, price, 0, 0, 0);
    }
};