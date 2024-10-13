#pragma once
#include <iostream>
#include <string>

class FoxAndMountainEasy {
    public:
    std::string possible(int n, int h0, int hn, std::string history) {
        int current_height = h0; 
        int reset_count = 0;
        for (int i = 0; i < history.length(); i++) {
            if (history[i] == 'U') {
                current_height++;
            }
            else {
                current_height--;
                if (current_height < 0) {
                    current_height = 0; 
                    reset_count++;
                }
            }
        }
        int remain_move = n - reset_count - history.length();
        int height_different = std::abs(hn - current_height);
        if (remain_move < height_different) {
            return "NO";
        } 
        if ((remain_move - height_different) % 2 == 1) {
            return "NO";
        }
        return "YES";
    }
};