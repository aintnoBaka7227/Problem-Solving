#pragma once
#include <iostream>
#include <vector> 

class BigBurger {
    public: 
    int maxWait(std::vector<int> arrival, std::vector<int> service) {
        int start = arrival[0]; 
        int result = 0;
        for (int i = 0; i < arrival.size() - 1; i++) {
            if (start + service[i] < arrival[i+1]) {
                start = arrival[i+1];
            }
            else {
                start = start + service[i];
                result = std::max(result, start - arrival[i+1]);
            }
        }
        return result;
    }
};