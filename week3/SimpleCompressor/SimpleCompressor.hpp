#pragma once
#include <string>

class SimpleCompressor {
    private:
    std::string recursiveUncompress(std::string data, int index){

    }
    public:
    std::string uncompress(std::string data) {
        recursiveUncompress(data, 0);
    }
};