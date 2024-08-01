#pragma once
#include <vector>
#include <string>
#include <algorithm>

class PartySeats {
    private:
    std::vector<std::string> boys = {};
    std::vector<std::string> girls = {};

    public:
    std::vector<std::string> seating(std::vector<std::string> attendees) {
        boys.clear();
        girls.clear();
        std::vector<std::string> plan = {};
        // check party size suitable
        int party_size = attendees.size();
        if (party_size % 4 != 0) {
            return plan;
        }

        // assign boy to boys and vice versa
        for (int i = 0; i < party_size; i++) {
            if (attendees[i].substr(attendees[i].find(' ') + 1) == "boy") {
                boys.push_back(attendees[i].substr(0, attendees[i].find(' ')));
            }
            else {
                girls.push_back(attendees[i].substr(0, attendees[i].find(' ')));
            }
        }
        if (boys.size() != girls.size()) {
            return plan;
        }
        // sort lexicographically
        std::sort(boys.begin(), boys.end());
        std::sort(girls.begin(), girls.end());
        //make the plan
        plan.push_back("HOST");
        for (int i = 0; i < boys.size() / 2; i++) {
            plan.push_back(girls[i]);
            plan.push_back(boys[i]);
        }
        plan.push_back("HOSTESS");
        for (int i = boys.size() / 2; i < boys.size() ; i++) {
            plan.push_back(boys[i]);
            plan.push_back(girls[i]);
        }
        return plan;
    }
};