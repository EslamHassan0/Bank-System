#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parser {
public:    
    static std::vector<std::string> split(const string& line, char delimiter = ',')
    {
        vector<std::string> tokens;
        stringstream ss(line);
        string item;

        while (std::getline(ss, item, delimiter))
        {
            tokens.push_back(item);
        }
        return tokens;
    }
    static Client parseToClient(const string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Client(); 
        int id = std::stoi(tokens[0]);
        std::string name = tokens[1];
        std::string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Client(id, name, pass, bal);
    }
    static Employee  parseToClient(const string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Client(); 
        int id = std::stoi(tokens[0]);
        std::string name = tokens[1];
        std::string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Employee (id, name, pass, salary);
    }
                
};
