#pragma once
#include <iostream>
#include <vector>

class MonstersValley2 {
    private:
    int backtracking(std::vector<int> dread, std::vector<int> price, int bribe, long strength, int index) {
        // std::cout << "strength: " << std::endl;
        if (index == dread.size()) {
            return bribe;
        }
        if (strength < dread[index]) {
            // std::cout << "index: " << index << std::endl;
            // std::cout << "inevitable bribe: " << backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1) << std::endl;
            return backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1);
        }
        // std::cout << "index: " << index << std::endl;
        // std::cout << "evitable bribe: " backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1) << std::endl;
        // std::cout << "not bribe: " << backtracking(dread, price, bribe, strength, index + 1) << std::endl;
        return std::min(backtracking(dread, price, bribe + price[index], strength + dread[index], index + 1), backtracking(dread, price, bribe, strength, index + 1));

    }
    public:
    int minimumPrice(std::vector<int> dread, std::vector<int> price) {
        return backtracking(dread, price, 0, 0, 0);
    }
};