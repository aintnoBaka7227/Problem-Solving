#include "ErdosNumber.hpp"

int main() {

    ErdosNumber test;
    
    std::vector<std::string> ss = test.calculateNumbers({"ERDOS"});
    for (auto s : ss) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    ss = test.calculateNumbers({"KLEITMAN LANDER", "ERDOS KLEITMAN"});
    for (auto s : ss) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    ss = test.calculateNumbers({"ERDOS A", "A B", "B AA C"}
);
    for (auto s : ss) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    ss = test.calculateNumbers({"ERDOS B", "A B C", "B A E", "D F"});
    for (auto s : ss) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    ss = test.calculateNumbers({"ERDOS KLEITMAN", "CHUNG GODDARD KLEITMAN WAYNE", "WAYNE GODDARD KLEITMAN", 
 "ALON KLEITMAN", "DEAN GODDARD WAYNE KLEITMAN STURTEVANT"});
    for (auto s : ss) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    
    return 0;
}