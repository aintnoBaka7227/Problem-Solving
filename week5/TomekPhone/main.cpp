#include "TomekPhone.hpp"

int main() {
    TomekPhone test;
    std::cout << test.minKeystrokes({11,23,4,50,1000,7,18}
,{3,1,4}) << std::endl;
    return 0;
}