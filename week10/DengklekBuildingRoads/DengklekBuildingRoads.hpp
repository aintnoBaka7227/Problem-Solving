#pragma once
#include <iostream>

const int MOD = 1000000007;
int dp[31][31][9][1 << 9];

class DengklekBuildingRoads {
    public:
    int numWays(int N, int M, int K) {
        dp[1][0][0][0] = 1;
        for (int i = 2; i <= N; i++) {
            for (int j = 0; j <= M; j++) {
                for (int k = K - 1; k >= 0; k--) {
                    for (int bit = 0; bit < (1 << (K + 1)); bit++) {
                        if (k == K - 1) {
                            if (bit % 2 == 1) {
                                dp[i][j][k][bit] = 0;
                            }
                            else {
                                dp[i][j][k][bit] = dp[i - 1][j][0][bit >> 1];
                            }
                        }
                        else {
                            dp[i][j][k][bit] = dp[i][j][k + 1][bit];
                        }
                        if (j > 0 && i - k - 1 >= 1) {
                            dp[i][j][k][bit] = dp[i][j][k][bit] + dp[i][j - 1][k][bit ^ (1 << (k + 1)) ^ (1 << 0)];
                            dp[i][j][k][bit] = dp[i][j][k][bit] % MOD;
                        }
                    }
                }
            }
        }
        return dp[N][M][0][0];
    }
};