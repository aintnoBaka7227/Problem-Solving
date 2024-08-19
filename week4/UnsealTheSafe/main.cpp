#include "UnsealTheSafe.hpp"

int main() {
    UnsealTheSafe test;
    std::cout << test.countPasswords(2) << std::endl;
    std::cout << test.countPasswords(3) << std::endl;
    return 0;
}