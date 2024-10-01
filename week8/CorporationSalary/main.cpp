#include "CorporationSalary.hpp"

int main() {
    CorporationSalary test;
    std::cout << test.totalSalary({"N"}) << std::endl;
    std::cout << test.totalSalary({"NNNNNN",
 "YNYNNY",
 "YNNNNY",
 "NNNNNN",
 "YNYNNN",
 "YNNYNN"}) << std::endl;
    return 0;
}