#include "RunLengthEncoding.hpp"

int main() {
    RunLengthEncoding test;
    std::cout << test.decode("4A3BC2DE") << std::endl;
    return 0;
}