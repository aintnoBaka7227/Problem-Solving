#include "RunLengthEncoding.hpp"

int main() {
    RunLengthEncoding test;
    std::cout << test.decode("9999999999999999999999999999999999999999999999999X") << std::endl;
    return 0;
}