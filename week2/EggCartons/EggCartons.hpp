#pragma once

// greedy
// check if % 2 -> not return -1 else n = n/2
// since 4 > 3 - > if the number of 8 boxes increase - > less box needed - > keep updating count
// check if % 4 -> if yes -> best result
// if not -> loop to n/4 and find a. since b increase -> each time a is found -> update the count

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
            for (int i = 0; i < n/4 + 1; i++) {
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