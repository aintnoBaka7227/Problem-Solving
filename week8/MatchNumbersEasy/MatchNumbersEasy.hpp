#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class MatchNumbersEasy {
    std::unordered_map<int, std::string> max_on_length;
    public:
    std::string recursiveMaxNumber(std::vector<int> matches, int n) {
        if(max_on_length.find(n) != max_on_length.end()) {
            return max_on_length[n];
        }
        std::string  max_num;
        for (int i = 0; i < matches.size(); i++) {
            if (matches[i] <= n) {
                std::string temp = recursiveMaxNumber(matches, n - matches[i]) + std::to_string(i); 
                // remove trailing zero
                while (temp[0] == '0' && temp.length() > 1) {
                    temp = temp.substr(1);
                }
                // final temp
                if (temp.length() > max_num.length() || temp.length() == max_num.length() && temp > max_num) {
                    max_num = temp;
                }
            }
        }
        max_on_length[n] = max_num;
        return max_num;
    }
    std::string maxNumber(std::vector<int> matches, int n) {
        max_on_length.clear();
        return recursiveMaxNumber(matches, n);
    }
};