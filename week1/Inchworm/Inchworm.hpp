#pragma once
#include <algorithm>

class Inchworm {
    public:
    int lunchtime(int branch, int rest, int leaf) {
        int greater = std::max(rest, leaf);
        int smaller = std::min(rest, leaf);
        int lcm = greater;
        while (lcm % smaller != 0) {
            lcm += greater;
        }
        int num_leaves = (branch / lcm) + 1;
        return num_leaves;
    }
};

