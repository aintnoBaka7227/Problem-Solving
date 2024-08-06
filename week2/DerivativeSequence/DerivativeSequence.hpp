#pragma once
#include <vector>

class DerivativeSequence {
    public:
    std::vector<int> derSeq(std::vector<int> a, int n) {
        if (n == 0) {
            return a;
        }
        for (int order = 1; order <= n; order++) {
            int len = a.size();
            for (int i = 1; i < len; i++){
                a.push_back(a[i] - a[i-1]);
            }
            for (int i = 0; i < len; i++) {
                a.erase(a.begin());
            }
        }
        return a;
    }
};