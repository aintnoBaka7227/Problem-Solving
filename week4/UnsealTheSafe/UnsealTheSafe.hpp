#pragma once
#include <iostream>
#include <vector>

// class UnsealTheSafe {
// private:
//     long result;
    
//     void backtrack(int N, const std::vector<int>& buttons, int index) {
//         if (index == N) {
//             result++;
//             return;
//         }
        
//         for (int i = 0; i < buttons.size(); i++) {
//             switch (buttons[i]) {
//                 case 1:
//                     backtrack(N, {2, 4}, index + 1);
//                     break;
//                 case 2:
//                     backtrack(N, {1, 3, 5}, index + 1);
//                     break;
//                 case 3:
//                     backtrack(N, {2, 6}, index + 1);
//                     break;
//                 case 4:
//                     backtrack(N, {1, 5, 7}, index + 1);
//                     break;
//                 case 5:
//                     backtrack(N, {2, 4, 6, 8}, index + 1);
//                     break;
//                 case 6:
//                     backtrack(N, {3, 5, 9}, index + 1);
//                     break;
//                 case 7:
//                     backtrack(N, {4, 8, 0}, index + 1);
//                     break;
//                 case 8:
//                     backtrack(N, {5, 7, 9}, index + 1);
//                     break;
//                 case 9:
//                     backtrack(N, {6, 8}, index + 1);
//                     break;
//                 case 0:
//                     backtrack(N, {7}, index + 1);
//                     break;
//                 default:
//                     break;
//             }
//         }
//     }

// public:
//     long countPasswords(int N) {
//         result = 0;
//         backtrack(N, {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 0);
//         return result;
//     }
// };

class UnsealTheSafe {
private:
// each vector correspond to the index that represent lists of numbers that can reach to that index
std::vector<std::vector<int>> previous_buttons = {{7}, {2, 4}, {1, 3, 5}, {2, 6}, {1, 5, 7}, {2, 4, 6, 8}, {3, 5, 9}, {4, 8, 0}, {5, 7, 9}, {6, 8}};
public:
    long countPasswords(int N) {
        std::vector<std::vector<long>> table(N + 1, std::vector<long>(10, 0));
        for (int i = 0; i < 10; i++) {
            table[1][i] = 1;
        }
        for (int len = 2; len <= N; len++) {
            for (int i = 0; i < 10; i++) {
                for (int previous_button : previous_buttons[i]) {
                    table[len][i] += table[len-1][previous_button];
                }
            }
        }
        long count = 0;
        for (int i = 0; i < 10; ++i) {
            count += table[N][i];
        }
        return count;
    }
};


