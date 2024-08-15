#include <string>
#include <climits>
#include <iostream>

class QuickSums {
    private:
        int recursiveMinSums(std::string numbers, int sum, int index, int count, int current) {
            if (index == numbers.size()) {
                if (current == sum) {
                    return count - 1;
                }
                return -1;
            }

            int result = -1;
            for (int i = index; i < numbers.size(); ++i) {
                int num = std::stol(numbers.substr(index, i - index + 1));
                //std::cout <<"subnum: " << num << std::endl;
                //std::cout <<"current sum: " << current+num << std::endl;
                int temp_result = recursiveMinSums(numbers, sum, i + 1, count + 1, current + num);
                //std::cout <<"current result: " << result << std::endl;
                if (temp_result != -1 && (result == -1 || temp_result < result)) {
                    result = temp_result;
                    //std::cout << "updated result: " << result << std::endl;
                }
            }
            return result;
        }
    public:
        int minSums(std::string numbers, int sum) {
            return recursiveMinSums(numbers, sum, 0, 0, 0);
        }
};