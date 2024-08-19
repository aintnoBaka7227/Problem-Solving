#pragma once
#include <iostream>
#include <vector>

class UnsealTheSafe {
private:
    long result;
    
    void backtrack(int N, const std::vector<int>& buttons, int index) {
        if (index == N) {
            result++;
            return;
        }
        
        for (int i = 0; i < buttons.size(); i++) {
            switch (buttons[i]) {
                case 1:
                    backtrack(N, {2, 4}, index + 1);
                    break;
                case 2:
                    backtrack(N, {1, 3, 5}, index + 1);
                    break;
                case 3:
                    backtrack(N, {2, 6}, index + 1);
                    break;
                case 4:
                    backtrack(N, {1, 5, 7}, index + 1);
                    break;
                case 5:
                    backtrack(N, {2, 4, 6, 8}, index + 1);
                    break;
                case 6:
                    backtrack(N, {3, 5, 9}, index + 1);
                    break;
                case 7:
                    backtrack(N, {4, 8, 0}, index + 1);
                    break;
                case 8:
                    backtrack(N, {5, 7, 9}, index + 1);
                    break;
                case 9:
                    backtrack(N, {6, 8}, index + 1);
                    break;
                case 0:
                    backtrack(N, {7}, index + 1);
                    break;
                default:
                    break;
            }
        }
    }

public:
    long countPasswords(int N) {
        result = 0;
        backtrack(N, {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 0);
        return result;
    }
};
