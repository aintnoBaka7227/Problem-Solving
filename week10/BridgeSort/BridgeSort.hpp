#pragma once
#include <iostream>
#include <map> 
#include <vector> 
#include <string>

class BridgeSort {
    private:
    std::vector<char> suits = {'C', 'D', 'H', 'S'};
    std::vector<char> values = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'T'
    , 'J', 'Q', 'K', 'A'};
    public: 
    std::string sortedHand(std::string hand) {
        std::vector<std::string> cards;
        std::string result = "";
        for (int i = 0; i < hand.length(); i = i + 2) {
            cards.push_back(hand.substr(i, 2));
        }
        for (int i = 0; i < cards.size() - 1; i++) {
            for (int j = 0; j < cards.size() - i - 1; j++) {
                if (cards[j][0] - cards[j+1][0] > 0) {
                    std::swap(cards[j], cards[j+1]);
                }
                else if (cards[j][0] - cards[j+1][0] == 0) {
                    int gap = 0; 
                    for (int k = 0; k < values.size(); k++) {
                        if (cards[j][1] == values[k]) {
                            gap += (k+1);
                        }
                        if (cards[j+1][1] == values[k]) {
                            gap -= (k+1);
                        }
                    }
                    if (gap > 0) {
                    std::swap(cards[j], cards[j+1]);   
                    }
                } 
            }
        }
        for (int i = 0; i < cards.size(); i++) {
            result += cards[i];
        }
        return result;
    }
};