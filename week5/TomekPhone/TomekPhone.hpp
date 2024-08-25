#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class TomekPhone {
    public:
    int minKeystrokes(std::vector<int> frequencies, std::vector<int> keySizes) {
        std::sort(frequencies.begin(), frequencies.end());
        int num_spaces = 0;
        int len = frequencies.size() - 1;
        for (int i = 0; i < keySizes.size(); i++) {
            num_spaces += keySizes[i];
        }
        if (len >= num_spaces) {
            return -1;
        }
        int result = 0;
        for (int i = 0; i < 50; i++) {
            for (auto j : keySizes) {
                if (j > i) {
                    result += (i+1) * frequencies[len];
                    len --;
                    if (len < 0) {
                        return result;
                    }
                }
            }
        }
        return result;
    }
};