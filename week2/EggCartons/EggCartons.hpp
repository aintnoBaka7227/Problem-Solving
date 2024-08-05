#pragma once

class EggCartons {
    public:
    int minCartons(int n) {
        if (n % 2 == 1) {
            return -1;
        }
        n = n / 2;
        int count = -1;
        int a, b;
        if (n % 4 == 0) {
             b = n / 4;
             count = b;
        } else {
            for (int i = 0; i < n/4; i++) {
                if ((n - i * 4) % 3 == 0) {
                    a = (n - i * 4) / 3;
                    b = i;
                    count = a + b;
                }
            }
        }
        return count;
    }
};