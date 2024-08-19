#pragma once
#include <iostream>
#include <vector>

class TimeTravellingCellar {
    public:
    int determineProfit(std::vector<int> profit, std::vector<int> decay) {
        int index_max = 0;
        int index_min = 0;
        for (int i = 0; i < profit.size(); i++) {
            if (profit[i] > profit[index_max]) {
                index_max = i;
            }
        }
        if (index_max == 0) {
            index_min++;
        }
        for (int i = 0; i < decay.size(); i++) {
            if (i == index_max) {
                continue;
            }
            if (decay[i] < decay[index_min]) {
                index_min = i;
            }
        }
        return profit[index_max] - decay[index_min];
    }
};