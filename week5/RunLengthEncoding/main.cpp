#include "RunLengthEncoding.hpp"

int main() {
    RunLengthEncoding test;
    std::cout << test.decode("50AB") << std::endl;
    return 0;
}