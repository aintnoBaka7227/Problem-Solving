#pragma once
#include <numeric>

class FracCount {
    private:
    int recursivePosition(int numerator, int denominator, int count) {
        if (numerator == 1 && denominator == 2) {
            return count;
        }
        while (numerator > 0) {
            if (std::gcd(numerator, denominator) == 1) {
                count++;
            }
            numerator--;
        }
        return recursivePosition(denominator - 2, denominator - 1, count);
    }
    public:
    int position(int numerator, int denominator) {
        return recursivePosition(numerator, denominator, 1);
    }
};