#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parser {
public:
    static vector<string> split(string line) {
       // return nullptr;
    }      
    static Client parseToClient(const std::string& line)
    {
        auto tokens = split(line, ',');
        // توقع 4 توكن: id, name, password, balance
        if (tokens.size() < 4) return Client(); // أو تعامل مع الخطأ
        int id = std::stoi(tokens[0]);
        std::string name = tokens[1];
        std::string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Client(id, name, pass, bal);
    }
                
};
