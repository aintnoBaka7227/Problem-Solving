#pragma once
#include <string>
#include <vector>

class SimpleCompressor {
 private:
  std::string recursiveUncompress(std::string sub_data) {
    int open_brac = -1;
    for (int i = sub_data.length() - 1; i >= 0; --i) {
      if (sub_data[i] == '[') {
        open_brac = i;
        break;
      }
    }
    if (open_brac == -1) {
      return sub_data;
    }
    std::string open_str = sub_data.substr(0, open_brac);
    int close_brac = sub_data.find(']');
    std::string close_str = sub_data.substr(close_brac + 1);
    int count = sub_data[open_brac + 1] - '0';
    std::string compressed_str =
        sub_data.substr(open_brac + 2, close_brac - open_brac - 2);
    std::string uncompressed_str = "";
    for (int i = 0; i < count; i++) {
      uncompressed_str += compressed_str;
    }
    sub_data = open_str + uncompressed_str + close_str;
    return recursiveUncompress(sub_data);
  }

 public:
  std::string uncompress(std::string data) {
    std::vector<std::string> compressions;
    std::string uncompressed;
    int count = 0;
    for (int i = 0; i < data.length(); i++) {
      int temp = i;
      if (data[i] >= 'A' && data[i] <= 'Z') {
        compressions.push_back(std::string(1, data[i]));
        continue;
      }
      if (data[i] == '[') {
        count++;
        while (count) {
          i++;
          if (data[i] == '[') count++;
          if (data[i] == ']') count--;
        }
      }
      if (temp != i) {
        compressions.push_back(data.substr(temp, i - temp + 1));
      }
    }
    for (const auto& compression : compressions) {
      //std::cout << compressions[i] << std::endl;
      uncompressed += recursiveUncompress(compression);
    }
    return uncompressed;
  }
};
