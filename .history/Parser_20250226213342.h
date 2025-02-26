#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parser {
public:
    static vector<string> split(string line) {
       // return nullptr;
    }  
    
    static std::vector<std::string> split(const std::string& line, char delimiter = ',')
    {
        std::vector<std::string> tokens;
        std::stringstream ss(line);
        std::string item;

        while (std::getline(ss, item, delimiter))
        {
            tokens.push_back(item);
        }
        return tokens;
    }
    static Client parseToClient(const std::string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Client(); 
        int id = std::stoi(tokens[0]);
        std::string name = tokens[1];
        std::string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Client(id, name, pass, bal);
    }
                
};
