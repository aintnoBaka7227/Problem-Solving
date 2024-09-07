#pragma once
#include <iostream> 
#include <string>
#include <sstream>
#include <vector>

class LostParentheses {
    public:
    int minResult(std::string e) {
        std::stringstream ss(e);
        std::vector<int> nums;
        std::vector<char> ops;
        int result = 0;
        char c;
        while (ss >> c) {
            if (std::isdigit(c)) {
                ss.putback(c);
                int num;
                ss >> num;
                nums.push_back(num);
            }
            else {
                ops.push_back(c);
            }
        }
        int index = -1;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == '-') {
                index = i;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (index != -1 && index < i) {
                result -= nums[i];
            }
            else {
                result += nums[i];
            }
        }
        return result;
    }
};