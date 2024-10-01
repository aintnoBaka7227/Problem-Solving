#pragma once 
#include <iostream> 
#include <vector> 

class ProblemsToSolve {
    public:
    int minNumber(std::vector<int> pleasantness, int variety) {
        int result = pleasantness.size();
        bool flag = false;
        for (int i = 1; i < pleasantness.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (std::abs(pleasantness[i] - pleasantness[j]) >= variety) {
                    int temp = 0;
                    flag = true;
                    // 0 to j 
                    if (j%2==0) {
                        temp+=j/2 + 1;
                    }
                    else {
                        temp+=j/2 + 2;
                    }
                    // j to i
                    if ((i-j) % 2 == 0) {
                        temp+=(i-j)/2;
                    }
                    else {
                        temp+=(i-j)/2 + 1;
                    }
                    result = std::min(result, temp);
                }
            }
            if(flag) {
            break;
            }
        } 
        return result;    
    }
}; 