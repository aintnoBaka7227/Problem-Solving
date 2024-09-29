#pragma once
#include <iostream>
#include <vector>

class HandsShaking {
    public:
    std::vector<long> counts;

    long recursiveCount(int n) {
        if (counts[n] != 0) {
            return counts[n]; 
        }

        if (n==2 || n==0) {
            return 1; 
        }

        long result = 0; 

        for (int i = 2; i <= n; i+=2) {
            result += recursiveCount(i-2)*recursiveCount(n-i);
        }

        counts[n] = result;
        return result; 
    }

    long countPerfect(int n) {
        for (int i = 0; i < 51; i++) {
            counts.push_back(0);
        }
        return recursiveCount(n);
    }
};