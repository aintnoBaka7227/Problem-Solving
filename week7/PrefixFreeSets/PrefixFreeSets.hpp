#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

class PrefixFreeSets {
    public:
    int maxElements(std::vector<std::string> words) {
        std::vector<bool> results;
        std::set<std::string> unique_words;
        for (auto word : words) {
            unique_words.insert(word);
        }
        std::vector<std::string> unique;
        for (auto w : unique_words) {
            unique.push_back(w);
        }
        //std::cout << unique.size() << std::endl;
        for (int i = 0; i < unique.size(); i++) {
            int result = 0;
            for (int j = 0; j < unique.size(); j++) {
                if (i != j) {
                    if (unique[i].length() <= unique[j].length()) { 
                        if (unique[j].substr(0, unique[i].length()) == unique[i]){
                            result = 1;
                        }
                    }
                }
            }
            results.push_back(result);
        }
        int count = 0;
        for (auto result : results) {
            //std::cout << result << std::endl;
            if (!result) count++;
        }
        return count;
    }
};