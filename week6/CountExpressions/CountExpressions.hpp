#pragma once
#include <iostream>
#include <unordered_map>

class CountExpressions {
    private:
    void backtrack(int x, int y, int count_x, int count_y, int end_value, std::unordered_map<int,int> &values) {
        if (count_x == 2 && count_y == 2) {
            values[end_value]++;
            return;
        }
        if (count_x < 2) {
            backtrack(x, y, count_x + 1, count_y, end_value + x, values);
            backtrack(x, y, count_x + 1, count_y, end_value - x, values);
            backtrack(x, y, count_x + 1, count_y, end_value * x, values);
        }
        if (count_y < 2) {
            backtrack(x, y, count_x, count_y + 1, end_value + y, values);
            backtrack(x, y, count_x, count_y + 1, end_value - y, values);
            backtrack(x, y, count_x, count_y + 1, end_value * y, values);
        }
    }
    public:
    int calcExpressions(int x, int y, int val) {
        std::unordered_map<int,int> values;
        backtrack(x, y, 1, 0, x, values);
        backtrack(x, y, 0, 1, y, values); 
        return values[val];
    }
};