#pragma once
#include <string>
#include <iostream>

class StreetParking {
    public:
    int freeParks(std::string street) {
        int count = 0;
        for (int i = 0; i < street.length(); i++) {
            if (street[i] != '-') continue;
            if (street[i+1] == 'B' || street[i+2] == 'B') continue;
            if (street[i+1] == 'S') continue;
            if (i > 0) {
                if (street[i-1] == 'S') continue;
            }
            count++;
        }
        return count;
    }
};