#pragma once
#include <unordered_map>
#include <vector> 
#include <iostream> 
#include <string>
#include <algorithm>

class RoughStrings {
    public:
    int minRoughness(std::string s, int n) {
        std::unordered_map<char, int> occurences;
        for (int i = 0; i < s.length(); i++) {
            occurences[s[i]]++;
        }
        std::vector<int> num_occurence;
        for (auto i = occurences.begin(); i != occurences.end(); i++) {
            num_occurence.push_back(i->second);
        }
        std::sort(num_occurence.begin(), num_occurence.end());
        int most = num_occurence[num_occurence.size() - 1];
        int least = num_occurence[0];
        int min_rough = most - least;
        if (min_rough == 0) return 0;

        while (n > 0 && num_occurence.size() > 1) {
            if (n >= least) {
                if (min_rough > most - num_occurence[1]) {
                    min_rough = most - num_occurence[1];
                    num_occurence.erase(num_occurence.begin());
                    if (min_rough == 0) {
                        return min_rough;
                    }
                    n = n - least;
                    least = num_occurence[0];
                    continue;
                }
            }
            num_occurence[num_occurence.size() - 1]--;
            if (num_occurence[num_occurence.size() - 1] == 0) num_occurence.erase(num_occurence.begin() + num_occurence.size() - 1);
            std::sort(num_occurence.begin(), num_occurence.end());
            most = num_occurence[num_occurence.size() - 1];
            min_rough = most - least;
            n--;
        }


        return min_rough;
    }
};