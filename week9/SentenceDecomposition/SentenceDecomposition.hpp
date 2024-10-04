#pragma once
#include <iostream>
#include <string> 
#include <vector> 
#include <unordered_map>
#include <climits>
#include <algorithm>

class SentenceDecomposition {
    private:
    std::unordered_map<std::string, int> transformation_costs; 
    int recursiveDecompose(std::string sentence, std::vector<std::string> &validWords) {
        if (transformation_costs.find(sentence) != transformation_costs.end()) {
            return transformation_costs[sentence];
        }
        if (sentence.length() == 0) {
            return 0;
        }
        int cost = 100000000;
        for (int i = 0; i < validWords.size(); i++) {
            if (validWords[i].length() > sentence.length()) {
                continue;
            }
            std::string word = validWords[i];
            std::string sub_sen = sentence.substr(0, validWords[i].length());
            int count_dif = 0;
            for (int j = 0; j < validWords[i].length(); j++) {
                if (validWords[i][j] != sub_sen[j]) {
                    count_dif++;
                }
            }
            std::sort(sub_sen.begin(), sub_sen.end());
            std::sort(word.begin(), word.end());
            if (word == sub_sen){
                std::string new_sub = sentence.substr(validWords[i].length());
                int new_cost = count_dif + recursiveDecompose(new_sub, validWords);
                if (new_cost < cost) {
                    cost = new_cost;
                }
            }
        }
        transformation_costs[sentence] = cost;
        return cost;   
    }
    public:
    int decompose(std::string sentence, std::vector<std::string> validWords) {
        transformation_costs.clear();
        int cost = recursiveDecompose(sentence, validWords);
        if (cost == 100000000) {
            return -1;
        }
        return cost;
    }
};