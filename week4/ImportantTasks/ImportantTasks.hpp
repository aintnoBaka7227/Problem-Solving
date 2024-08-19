#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class ImportantTasks {

    public:
    int maximalCost(std::vector<int> complexity, std::vector<int> computers) {
        std::sort(complexity.begin(), complexity.end());
        std::sort(computers.begin(), computers.end());
        int count = 0;
        int j = 0;
        for (int i = 0; i < complexity.size() && j < computers.size(); i++) {
            if (complexity[i] <= computers[j]) {
                count++;
                j++;
            }
            else {
                while(complexity[i] > computers[j] && j < computers.size()) {
                    j++;
                }
                if (complexity[i] <= computers[j]) {
                    count++;
                    j++;
                }
            }
        } 
        return count;
    }
};