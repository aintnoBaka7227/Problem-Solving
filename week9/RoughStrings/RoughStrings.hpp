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
        int most = num_occurence.back();
        int least = num_occurence.front();
        int min_rough = most - least;
        if (min_rough == 0) return 0;

    //     while (n > 0 && num_occurence.size() > 1) {
    //         //std::cout << n << std::endl;
    //         if (n >= least) {
    //             int count = 0;
    //             for (int i = 0; i < num_occurence.size() - 1; i++) {
    //                 if (num_occurence[i] == least) count+=least;
    //             }
    //             if (min_rough > most - num_occurence[1] || n>=count) {
    //                 min_rough = most - num_occurence[1];
    //                 num_occurence.erase(num_occurence.begin());
    //                 if (min_rough == 0) {
    //                     return 0;
    //                 }
    //                 n = n - least;
    //                 least = num_occurence.front();
    //                 //std::cout <<"delete least: " <<  min_rough << std::endl;
    //                 continue;
    //             }
    //         }
    //         num_occurence.back()--;
    //         n--;
    //         if (num_occurence.back() == 0) {
    //             num_occurence.erase(num_occurence.begin() + num_occurence.size() - 1);
    //         }
    //         std::sort(num_occurence.begin(), num_occurence.end());
    //         most = num_occurence.back();
    //         //std::cout << most << std::endl;
    //         least = num_occurence.front();
    //         //std::cout << least << std::endl;
    //         min_rough = most - least;
    //         //std::cout <<"delete most: " <<  min_rough << std::endl;
    //     }
        for (int l = 1; l <= most; l++) {
            for (int m = l; m <= most; m++ ) {
                int temp_rough = m - l;
                int remove_count = 0; 
                for (int i = 0; i < num_occurence.size(); i++) {
                    if (num_occurence[i] > m) {
                        remove_count += num_occurence[i] - m;
                    }
                    else if (num_occurence[i] < l) {
                        remove_count += num_occurence[i];
                    }
                }
                if (remove_count <= n) {
                    min_rough = std::min(min_rough, temp_rough);
                }
            }
        }
        return min_rough;
    }
    
};

