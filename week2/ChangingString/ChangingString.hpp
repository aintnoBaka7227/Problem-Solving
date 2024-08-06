#pragma once
#include <string>
#include <vector>
#include <algorithm>

class ChangingString {
    public:
    int distance(std::string A, std::string B, int K) {
        int new_distance = 0;
        if (A == B) {
            return new_distance + K;
        }
        std::vector<int> distances;
        for (int i = 0; i < A.length(); i++) {
            distances.push_back(abs(A[i] - B[i]));
        }
        std::sort(distances.begin(), distances.end());
        for (int i = 0; i < K; i++) {
            distances.pop_back();
        }
        for (int i = 0; i < distances.size(); i++) {
            new_distance = new_distance + distances[i];
        }
        return new_distance;
    }
};