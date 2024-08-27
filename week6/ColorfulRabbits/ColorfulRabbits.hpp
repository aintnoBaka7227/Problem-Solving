#pragma once
#include <vector>
#include <unordered_map>
#include <iostream>
#include <cmath>

class ColorfulRabbits {
    public:
    int getMinimum(std::vector<int> replies) {
        int result = 0;
        std::unordered_map<int, int> values;
        for (int i = 0; i < replies.size(); i++) {
            values[replies[i]]++;
        }
        for (auto i : values) {
            // std::cout << i.first << " " << i.second << std::endl;
        }
        for (auto i : values) {
            if (i.first == 0) {
                result+=i.second;
                // std::cout << result << std::endl;
            }
            else {
                if (i.second == 1) {
                    result+=i.first + 1;
                    // std::cout << result << std::endl;
                }
                else if (i.second >= 2) {
                    int group_size = i.first + 1;
                    // std::cout << group_size << std::endl;
                    int num_group = ceil(i.second * 1.0 / group_size);
                    // std::cout << num_group << std::endl;
                    result += num_group * (group_size);
                    // std::cout << result << std::endl;
                }
            }
        }
        return result;
    }
};