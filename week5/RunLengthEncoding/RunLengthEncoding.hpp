#pragma once
#include <iostream>
#include <string>

class RunLengthEncoding {
    public:
    std::string decode(std::string text) {
        for (int i = 0; i < text.length(); i++) {
            std::string decoded;
            std::string count;
            //std::cout << decoded << std::endl;
            while ((text[i] - '0') >= 0 && (text[i] - '0') <= 9) {
                count+=text[i];
                i++;
            }
            //std::cout << "count: " << count << std::endl;
            if (count != "") {
                for (int j = 0; j < std::stoi(count); j++) {
                    decoded = decoded + text[i];
                }
                //std::cout << decoded << std::endl;
                text = text.substr(0, i - count.length()) + decoded + text.substr(i+1);
            }
        }
        if (text.length() > 50) {
            return "TOO LONG";
        }
        return text;
    }
};

 