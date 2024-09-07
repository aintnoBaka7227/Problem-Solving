#pragma once
#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

class ShipBoxes {

    public:
    int bestCost(std::vector<int> box1, std::vector<int> box2) {
        int min = INT_MAX;
        for (int a = 0; a < 3; a++) {
            for (int b = 0; b < 3; b++) {
                if (a != b) {
                    for (int x = 0; x < 3; x++) {
                        for (int y = 0; y < 3; y++) {
                            if (x != y) {
                                int c = 3 - a - b;
                                int z = 3 - x - y;
                                std::vector<int> box;
                                box.push_back(std::max(box1[a],box2[x]));
                                box.push_back(std::max(box1[b],box2[y]));
                                box.push_back(box1[c]+box2[z]);
                                std::sort(box.begin(), box.end());
                                int cost = 4 * box[0] * box[1] + 2*(box[0] + box[1]) * box[2];
                                min = std::min(min, cost);
                            }
                        }
                    }
                }
            }
        }
        return min;
    }
};