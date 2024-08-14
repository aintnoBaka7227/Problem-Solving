#pragma once
#include <string>

class SimpleCompressor {
    public:
    std::string uncompress(std::string data) {
        // int open_brac = data.rfind('[');
        int open_brac = -1;
        for (int i = data.length() - 1; i >= 0; --i) {
            if (data[i] == '[') {
                open_brac = i;
                break;
            }
        }
        if (open_brac == -1) {
            return data;
        }
        std::string open_str = data.substr(0, open_brac);
        int close_brac = data.find(']');
        std::string close_str = data.substr(close_brac + 1);
        int count = data[open_brac + 1] - '0';
        std::string compressed_str = data.substr(open_brac + 2, close_brac - open_brac - 2);
        std::string uncompressed_str = "";
        for (int i = 0; i < count; i++) {
            uncompressed_str+=compressed_str;
        }
        data = open_str + uncompressed_str + close_str;
        return uncompress(data);
    }
};