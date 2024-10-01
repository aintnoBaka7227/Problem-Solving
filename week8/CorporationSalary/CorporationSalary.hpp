#pragma once
#include <iostream>
#include <string>
#include <vector>

class CorporationSalary {
    public:
    long totalSalary(std::vector<std::string> relations) {
        std::vector<long> salaries(relations.size(), 0);
        int sum = 0;
        for (int i = 0; i < relations.size(); i++) {
            sum+=recursiveSalary(relations, i, salaries);
        }
        return sum;
    }
    long recursiveSalary(std::vector<std::string> relations, int index, std::vector<long> &salaries) {
        if (salaries[index] != 0) {
            return salaries[index];
        }
        bool is_manager = false; 
        for (int j = 0; j < relations.size(); j++) {
            if (j!=index) {
                if (relations[index][j] == 'Y') {
                    is_manager = true;
                    salaries[index] += recursiveSalary(relations, j, salaries);
                }
            }
        }
        if (!is_manager) {
            salaries[index] = 1;
        }
        return salaries[index];
    }
};