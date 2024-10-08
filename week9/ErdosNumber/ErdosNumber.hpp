#pragma once
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <queue> 
#include <iostream>

class ErdosNumber {
    public:
    std::vector<std::string> calculateNumbers(std::vector<std::string> publications) {
        std::set<std::string> authors;
        std::unordered_map<std::string, std::unordered_set<std::string>> authors_graph;

        for (auto publication : publications) {
            std::string s;
            std::stringstream ss(publication);
            std::vector<std::string> author_list;
            while(getline(ss, s, ' ')) {
                author_list.push_back(s);
            }
            for (auto author : author_list) {
                authors.insert(author);
                for (auto coauthor : author_list) {
                    if (coauthor != author) {
                        authors_graph[author].insert(coauthor);
                        authors_graph[coauthor].insert(author);
                    }
                }
            }

        }

        std::unordered_map<std::string, int> erdos_num;
        std::queue<std::string> temp_authors; 
        erdos_num["ERDOS"] = 0;
        temp_authors.push("ERDOS");
        while (!temp_authors.empty()) {
            std::string current_author = temp_authors.front();
            temp_authors.pop();

            for(auto coauthor : authors_graph[current_author]) {
                if (erdos_num.find(coauthor) == erdos_num.end()) {
                    erdos_num[coauthor] = erdos_num[current_author] + 1;
                    temp_authors.push(coauthor);
                }
            }
        }   


        std::vector<std::string> result; 
        for (auto author : authors) {
            if (erdos_num.find(author) != erdos_num.end()) {
                result.push_back(author + " " + std::to_string(erdos_num[author]));
            } else {
                result.push_back(author);
            }
        }
        return result;
    }
};