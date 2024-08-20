#include "RunLengthEncoding.hpp"

int main() {
    RunLengthEncoding test;
    std::cout << test.decode("50A1B") << std::endl;
    return 0;
}