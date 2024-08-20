#pragma once
#include <iostream>
#include <string>

class RunLengthEncoding {
    public:
    std::string decode(std::string text) {
        std::string decoded_text;
        for (int i = 0; i < text.length(); i++) {
            //std::cout << "i: " << i << std::endl;
            int count = 0;
            std::string decode;
            while (text[i] - '0' >= 0 && text[i] - '0' <= 9) {
                count = count * 10 + (text[i] - '0');
                i++;
                //std::cout << "new i: " << i << std::endl;
            }
            //std::cout << "new count: " << count << std::endl;
            if (count != 0) {
                if (count > 50) {
                    return "TOO LONG";
                }
                for (int j = 0; j < count; j++) {
                    decode += text[i]; 
                }
                decoded_text +=decode;
            }
            else {
                decoded_text +=text[i];
            }
            //std::cout << "decode: " << decode << std::endl;
            //std::cout << "decoded_text: " << decoded_text << std::endl;
        }
        
        if (decoded_text.length() > 50) {
            return "TOO LONG";
        }
        return decoded_text;
    }
};

 