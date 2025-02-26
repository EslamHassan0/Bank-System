#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parser {
public:    
    static std::vector<std::string> split(const string& line, char delimiter = ',')
    {
        vector<string> tokens;
        stringstream ss(line);
        string item;

        while (getline(ss, item, delimiter))
        {
            tokens.push_back(item);
        }
        return tokens;
    }
    static Client parseToClient(const string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Client(); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Client(id, name, pass, bal);
    }
    static Employee  parseToClient(const string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Employee(); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double salary = stod(tokens[3]);
        return Employee (id, name, pass, salary);
    }
    static Admin   parseToClient(const string& line)
    {
        auto tokens = split(line, ',');
        
        if (tokens.size() < 4) return Admin (); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double salary  = stod(tokens[3]);
        return Admin  (id, name, pass, salary);
    }
                
};
