#pragma once
#include <string>

class Reppity {
    public:
    int longestRep(std::string input) {
        int len = input.length();
        for (int i = len/2; i > 0; i--) {
            for (int j = 0; j < len - i * 2; j++) {
                std::string s1 = input.substr(j, i);
                if (input.find(s1, j+i) != std::string::npos) {
                    return i;
                }
            }
        }
        return 0;
    };
};
