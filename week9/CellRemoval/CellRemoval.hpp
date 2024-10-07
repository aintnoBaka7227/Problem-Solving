#pragma once
#include <vector>
#include <iostream>

class CellRemoval {
    public: 
    int cellsLeft(std::vector<int> parent, int deletedCell) {
        std::vector<int> cell_status(parent.size(), 1);
        cell_status[deletedCell] = 0;
        for (int i = 0; i < parent.size(); i++) {
            int curr_par = parent[i];
            while(curr_par != -1) {
                cell_status[curr_par] = 0;
                if (curr_par == deletedCell) {
                    cell_status[i] = 0;
                    break;
                }
                curr_par = parent[curr_par];
            }
        }
        int count = 0; 
        for (int i = 0; i < cell_status.size(); i++) {
            if (cell_status[i] == 1) {
                count++;
            } 
        }
        return count;
    }
};
