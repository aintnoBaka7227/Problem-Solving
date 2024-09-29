#pragma once
#include <iostream>

class HandsShaking {
    public:
    long countPerfect(int n) {
        if (n==2 || n==0) {
            return 1; 
        }

        long result = 0; 

        for (int i = 2; i <= n; i+=2) {
            result += countPerfect(i-2)*countPerfect(n-i);
        }

        return result; 
    }
};