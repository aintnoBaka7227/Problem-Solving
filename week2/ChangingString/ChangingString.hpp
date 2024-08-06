#pragma once
#include <string>
#include <vector>
#include <algorithm>

class ChangingString {
    public:
    int distance(std::string A, std::string B, int K) {
        int new_distance = 0;
        std::vector<int> distances;
        for (int i = 0; i < A.length(); i++) {
            distances.push_back(abs(A[i] - B[i]));
        }
        std::sort(distances.begin(), distances.end());
        int len = distances.size();
        for (int i = len - 1; i >= len - K; i--) {
            if (distances[i] == 0) {
                distances[i] = 1;
            }
            else {
                distances[i] = 0;
            }
        }
        for (int i = 0; i < distances.size(); i++) {
            new_distance = new_distance + distances[i];
        }
        return new_distance;
    }
};