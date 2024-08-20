#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class SimpleDuplicateRemover {

    public:
    std::vector<int> process(std::vector<int> sequence) {
    std::vector<int> result;
    int flag = 0;
    result.push_back(sequence[sequence.size() - 1]);
    for (int i = sequence.size() - 2; i >= 0; i--) {
        for (auto j = result.begin(); j!=result.end(); j++) {
            if (*j == sequence[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            result.push_back(sequence[i]);
        }
        else flag = 0;
    }
    std::reverse(result.begin(), result.end());
    return result;
    }
};