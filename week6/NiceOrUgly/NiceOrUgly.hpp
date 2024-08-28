#pragma once
#include <iostream>
#include <string>
#include <set>
#include <unordered_map>

class NiceOrUgly {
    private:
    bool nice, ugly;
    std::set<char> vowels = {'A', 'I', 'U', 'E', 'O'};  
    void recursion(std::string s, int count_v, int count_c) {
        // std::cout << s[0] << std::endl;
        // std::cout << count_v << " " << count_c << std::endl;
        // std::cout << nice << " " << ugly << std::endl;
        if (s.length() == 0 && count_v != 3 && count_c != 5) {
            nice = true;
            // std::cout << nice << " " << ugly << std::endl;
            return;
        }
        if (count_v == 3 || count_c == 5) {
            ugly = true;
            // std::cout << nice << " " << ugly << std::endl;
            return;
        }
        if (s[0] == '?') {
            recursion(s.substr(1), count_v + 1, 0);
            recursion(s.substr(1), 0, count_c + 1);
        }
        if (vowels.find(s[0]) != vowels.end()) {
            recursion(s.substr(1), count_v + 1, 0);
        }
        else {
            recursion(s.substr(1), 0, count_c + 1);
        }
    } 
    public:
    std::string describe(std::string s) {
        nice = false;
        ugly = false;
        recursion(s, 0, 0);
        if (nice == true && ugly == true) {
            return "42";
        }
        if (ugly == true) {
            return "UGLY";
        }
        return "NICE";
    }
};