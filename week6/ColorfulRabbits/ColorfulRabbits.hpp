#pragma once
#include <vector>
#include <unordered_map>
#include <iostream>

class ColorfulRabbits {
    public:
    int getMinimum(std::vector<int> replies) {
        int result = 0;
        std::unordered_map<int, int> values;
        for (int i = 0; i < replies.size(); i++) {
            values[replies[i]]++;
        }
        // for (auto i : values) {
        //     std::cout << i.first << " " << i.second << std::endl;
        // }
        for (auto i : values) {
            if (i.first == 0) {
                result+=i.second;
            }
            else {
                if (i.second == 1) {
                    result+=i.first;
                }
                else if (i.second == 2) {
                    result+=(i.first + 1);
                }
                else {
                    int count = i.second / 2;
                    result+=(count * (i.first + 1));
                    result+=i.first;
                }
            }
        }
        return result;
    }
};