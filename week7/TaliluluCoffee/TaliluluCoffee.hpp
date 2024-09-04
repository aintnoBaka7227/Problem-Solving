#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class TaliluluCoffee {

    public:
    int maxTip(std::vector<int> tips) {
        int profit = 0;
        std::sort(tips.begin(), tips.end());
        std::reverse(tips.begin(), tips.end());
        for (int i = 0; i < tips.size(); i++) {
            if ((tips[i] - i) <= 0) break;
            profit += tips[i] - i;
        }
        return profit;
    }
};