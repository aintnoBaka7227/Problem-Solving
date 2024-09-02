#pragma once
#include <iostream>
#include <cstring>

class JumpyNum {
    private:
    int count (int high) {
        int count_high = 0;
        std::string str_high = std::to_string(high);
        for (int len = 1; len < str_high.length(); len++) {
            for (int d = 1; d < 10; d++) {
                count_high+=dp[len][d];
                //std::cout << len << " " << d << " " << count_high << std::endl;
            }
        }
        for (int index = 0; index < str_high.length(); index++) {
            for (int d = (index == 0 ? 1 : 0); d < int(str_high[index] - '0'); d++) {
                if (index > 0 && abs(int(str_high[index - 1] - '0') - d) < 2) {
                    continue;
                }
                count_high+=dp[str_high.length() - index][d];
                //std::cout << index << " " << d << " " << count_high << std::endl;
            }
            if (index > 0 && abs(str_high[index] - str_high[index - 1]) < 2) {
                break;
            }
        }
        //std::cout << "count: " << high << " " << count_high << std::endl;
        return count_high;
    }
    public:
    int dp[11][10];
    int howMany(int low, int high) {
        memset(dp, 0, sizeof(dp));
        for (int d = 0; d < 10; d++) {
            dp[1][d] = 1;
        }
        for (int len = 2; len < 11; len++) {
            for (int d = 0; d < 10; d++) {
                for (int i = 0; i < 10; i++) {
                    if (abs(d-i) >= 2) {
                        dp[len][d] += dp[len-1][i];
                        //std::cout << len-1 << " " << d << " " << dp[len-1][d] << std:endl;
                    }
                    // std::cout << len << " " << d << " " << dp[len][d] << std::endl;
                }
            }
        }
        int result = count(high+1) - count(low);  
        return result; 
    }
};