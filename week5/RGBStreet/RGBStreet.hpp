#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class RGBStreet {
    public:
    int estimateCost(std::vector<std::string> houses) {
        std::vector<std::vector<int>> dynamic_costs(3, std::vector<int>(houses.size() + 1, 0));
        for (int i = 0; i < houses.size(); i++) {
            // parse each string to get the prices
            std::string input_string(houses[i]);
            std::stringstream ss(input_string);
            std::string price;
            std::vector<int> prices;
            char delimiter=' ';
            while (getline(ss, price, delimiter)) {
                prices.push_back(std::stoi(price));
            }
            // for (auto& price : prices) {
            //     std::cout << price << std::endl;
            // }
            dynamic_costs[0][i+1] = prices[0] + std::min(dynamic_costs[1][i], dynamic_costs[2][i]);
            dynamic_costs[1][i+1] = prices[1] + std::min(dynamic_costs[0][i], dynamic_costs[2][i]);
            dynamic_costs[2][i+1] = prices[2] + std::min(dynamic_costs[0][i], dynamic_costs[1][i]);
        }
        int min = dynamic_costs[0][houses.size()];
        min = std::min(min, dynamic_costs[1][houses.size()]);
        min = std::min(min, dynamic_costs[2][houses.size()]);
        return min;
    }
};