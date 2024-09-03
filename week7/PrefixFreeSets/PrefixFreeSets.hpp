#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class PrefixFreeSets {
    public:
    int maxElements(std::vector<std::string> words) {
        std::vector<int> results;
        for (int i = 0; i < words.size(); i++) {
            int result = words.size();
            for (int j = 0; j < words.size(); j++) {
                if (i != j) {
                    if (words[i].find(words[j]) == 0 || words[j].find(words[i]) == 0) { 
                        result--;
                    }
                }
            }
            results.push_back(result);
        }
        std::sort(results.begin(), results.end());
        return results[0];
    }
};