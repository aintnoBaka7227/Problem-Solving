#pragma once
#include <vector>

class ElevatorLimit {
    public:
    std::vector<int> getRange(std::vector<int> enter, std::vector<int> exit, int physicalLimit) {
        std::vector<int> result = {};
        int min = 0;
        int max = 0;
        int temp = 0;
        for (int i = 0; i < enter.size(); i++) {
            temp = temp - exit[i];
            if (min > temp) {
                min = temp;
            }
            temp = temp + enter[i];
            if (temp > max) {
                max = temp;
            }
            if ((max - min) > physicalLimit) {
                return result;
            }
        }
        result.push_back(-min);
        result.push_back(physicalLimit - max);
        return result;
    }
};