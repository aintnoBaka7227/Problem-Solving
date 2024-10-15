#pragma once
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class BlockEnemy {
    public:
    int minEffort(int N, std::vector<std::string> roads, std::vector<int> occupiedTowns) {
        std::vector<std::vector<bool>> paths(N, std::vector<bool>(N, false));
        std::vector<std::vector<bool>> temps(N, std::vector<bool>(N, false));
        std::vector<std::pair<int, std::pair<int, int>>> weights;
        for (int i = 0; i < roads.size(); i++) {
            std::vector<int> road;
            std::stringstream ss(roads[i]);
            std::string s; 
            while (ss >> s) {
                road.push_back(std::stoi(s));
            }
            weights.push_back(std::make_pair(road[2], std::make_pair(road[0], road[1])));
        }
        std::sort(weights.begin(), weights.end());
        int result = 0;
        for (int i = weights.size() - 1; i >= 0; i--) {
            int town1 = weights[i].second.first;
            int town2 = weights[i].second.second;
            paths[town1][town2] = true;
            paths[town2][town1] = true;
            if (is_connected(paths,temps, occupiedTowns)) {
                continue;
            }
            paths[town1][town2] = false;
            paths[town2][town1] = false;
            result += weights[i].first;
        }
        return result;
    }

    bool is_connected(std::vector<std::vector<bool>> &paths, std::vector<std::vector<bool>> &temps, std::vector<int> occupiedTowns) {
        for(int i = 0; i < paths[0].size(); i++) {
            for(int j = 0; j < paths[0].size(); j++) {
                temps[i][j]=paths[i][j];
            }
        }

        for(int k = 0; k < paths[0].size(); k++){
            for(int i = 0; i < paths[0].size(); i++) {
                for(int j = 0; j < paths[0].size(); j++) {
                    temps[i][j]=temps[i][j]||(temps[i][k] && temps[k][j]);
                }
            } 
        }

        for(int i = 0; i<occupiedTowns.size(); i++) {
            for(int j = i + 1; j < occupiedTowns.size(); j++) {
                if(temps[occupiedTowns[i]][occupiedTowns[j]]) {
                    return false;
                }
            }         
        }
        return true;
    }
};