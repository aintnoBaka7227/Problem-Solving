#pragma once
#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
#include <cstring>

// class NiceOrUgly {
//     private:
//     bool nice, ugly;
//     std::set<char> vowels = {'A', 'I', 'U', 'E', 'O'};  
//     void recursion(std::string s, int count_v, int count_c) {
//         if (s.length() == 0 && count_v != 3 && count_c != 5) {
//             nice = true;
//             return;
//         }
//         if (count_v == 3 || count_c == 5) {
//             ugly = true;
//             return;
//         }
//         if (s[0] == '?') {
//             recursion(s.substr(1), count_v + 1, 0);
//             recursion(s.substr(1), 0, count_c + 1);
//         }
//         if (vowels.find(s[0]) != vowels.end()) {
//             recursion(s.substr(1), count_v + 1, 0);
//         }
//         else {
//             recursion(s.substr(1), 0, count_c + 1);
//         }
//     } 
//     public:
//     std::string describe(std::string s) {
//         nice = false;
//         ugly = false;
//         recursion(s, 0, 0);
//         if (nice == true && ugly == true) {
//             return "42";
//         }
//         if (ugly == true) {
//             return "UGLY";
//         }
//         return "NICE";
//     }
// };

class NiceOrUgly {
    public:
    std::set<char> vowels = {'A', 'I', 'U', 'E', 'O'};
    std::string describe(std::string s) {
        bool nice = false;
        bool ugly = false;
        bool dp[s.length() + 1][4][6][2];
        std::memset(dp, 0, sizeof(dp));
        dp[0][0][0][0] = true;
        for (int index = 0; index < s.length(); index ++) {
            for (int count_v = 0; count_v < 3; count_v++) {
                for (int count_c = 0; count_c < 5; count_c++) {
                    for (int ugly = 0; ugly < 2; ugly++) {
                        if (dp[index][count_v][count_c][ugly]) {
                            if (s[index] == '?') {
                                if (count_v + 1 == 3) {
                                    dp[index+1][count_v+1][0][1] = true;
                                    // std::cout << "ugly: " << index + 1 << std::endl;
                                }
                                else {
                                    dp[index+1][count_v+1][0][0] = true;
                                    // std::cout << "count_v" << count_v + 1 << std::endl;
                                }
                                if (count_c + 1 == 5) {
                                    dp[index+1][0][count_c+1][1] = true;
                                    // std::cout << "ugly: " << index + 1 << std::endl;
                                }
                                else {
                                    dp[index+1][0][count_c+1][0] = true;
                                    // std::cout << "count_c" << count_c + 1 << std::endl;
                                }
                            }
                            if (vowels.find(s[index]) != vowels.end()) {
                                if (count_v + 1 == 3) {
                                    dp[index+1][count_v+1][0][1] = true;
                                    // std::cout << "ugly: " << index + 1 << std::endl;
                                }
                                else {
                                    dp[index+1][count_v+1][0][0] = true;
                                    // std::cout << "count_v" << count_v + 1 << std::endl;
                                } 
                            }
                            else {
                                if (count_c + 1 == 5) {
                                    dp[index+1][0][count_c+1][1] = true;
                                    // std::cout << "ugly: " << index + 1 << std::endl;
                                }
                                else {
                                    dp[index+1][0][count_c+1][0] = true;
                                //     std::cout << "count_c" << count_c + 1 << std::endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        for (int k = 0; k < s.length() + 1; k++) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 6; j++) {
                    if (dp[k][i][j][1]) {
                        ugly = true;
                    }
                    if (k == s.length()) {
                        if (dp[k][i][j][0]) {
                            nice = true;
                        }
                    }
                }
            }
        }
        if (ugly) {
            if (nice) {
                return "42";
            }
            return "UGLY";
        }
        return "NICE";
    }
};