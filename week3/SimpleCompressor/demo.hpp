#include <string>
#include <iostream>
using namespace std;

class SimpleCompressor {
    public:
    string uncompress(string data) {
        return extend(data, 0);
    }

    private:
    string extend(string &data, size_t pos) {

        string uncompressed = "";
        int len = -1;
        int count = 0;

        if (pos >= data.length())
            return uncompressed;
        for (size_t i = pos; i < data.length(); i++) {
            cout << "log at pos: " << pos << " " << uncompressed << endl;
            if (data[i] >= 'A' && data[i] <= 'Z') {
                uncompressed += data[i];
                cout << "log after first if: " << uncompressed << endl;
                continue;
            }
            if (data[i] == '[') {
                uncompressed += extend(data, i + 1);
                count ++;
                while (count) {
                    i++;
                    if (data[i] == '[') count++;
                    else if (data[i] == ']') count --;
                }
            }
            else if (data[i] >= '0' && data[i] <= '9') {
                len = data[i] - '0'; 
                cout << "log len: " << len << endl;
            }
            else if (data[i] == ']') {
                string temp = uncompressed;
                for (int i = 1; i < len; i++) 
                    uncompressed += temp;
                cout << "log bf return: " << uncompressed << endl;
                return uncompressed;
            }
        }
        cout << "final log: " << uncompressed << endl;
        return uncompressed;
    }
};  