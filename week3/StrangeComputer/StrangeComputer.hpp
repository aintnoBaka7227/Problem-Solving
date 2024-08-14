#pragma once
#include <string>

class StrangeComputer {
    private:
        int recursive(std::string mem, char c, int count) {
            if (mem.length() == 0) {
                return count;
            }
            if (mem[0] == c) {
                return recursive(mem.substr(1), c, count);
            }
            c = mem[0];
            return recursive(mem.substr(1), c, ++count);
        }
    public:
        int setMemory(std::string mem) {
            return recursive(mem, '0', 0);
        }
};