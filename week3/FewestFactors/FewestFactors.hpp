#pragma once
#include <vector>
#include <iostream>
#include <climits>

class FewestFactors {
    private:
    std::vector<int> permutation(std::vector<int> digits, int index, int len) {
        std::vector<int> nums;
        if (index == len) {
            int num = 0;
            for (int i = 0; i <= len; i++) {
                num = num * 10 + digits[i];
            }
            nums.push_back(num);
            // std::cout <<"perm: " << num << std::endl;
        }
        else {
            for (int i = index; i <= len; i++) {
                std::swap(digits[index], digits[i]);
                std::vector<int> sub_perm = permutation(digits, index + 1, len);
                nums.insert(nums.end(), sub_perm.begin(), sub_perm.end());
                std::swap(digits[index], digits[i]);
            }
        }
        return nums;
    }
    public:
    int number (std::vector<int> digits) {
        int count = INT_MAX;
        int result = 1;
        std::vector<int> nums = permutation(digits, 0, digits.size() - 1);
        for (int i = 0; i < nums.size(); i++) {
            // std::cout << nums[i] << std::endl;
            int num_factor = 1;
            int temp_num = 0;
            if (nums[i] == 1) {
                return 1;
            }
            else {
                temp_num = nums[i];
                for (int j = 1; j <= nums[i] / 2; j++) {
                    if (nums[i] % j == 0) {
                        num_factor++;
                    }
                }
                if (num_factor < count || (num_factor == count && temp_num < result)) {
                    count = num_factor;
                    result = temp_num;
                }
            }
        }
        return result;
    }
};