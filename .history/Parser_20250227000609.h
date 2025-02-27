#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "Client.h"    
#include "Employee.h"  // تعريف Employee
#include "Admin.h"     // تعريف Admin
using namespace std;

class Parser {
public:    
    static std::vector<std::string> split(const string& line)
    {
        vector<string> tokens;
        stringstream ss(line);
        string item;

        while (getline(ss, item, ','))
        {
            tokens.push_back(item);
        }
        return tokens;
    }
    static Client parseToClient(const string& line)
    {
        auto tokens = Parser::split(line);
        
        if (tokens.size() < 4) return Client(); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double bal = std::stod(tokens[3]);
        return Client(id, name, pass, bal);
    }
    static Employee  parseToEmployee(const string& line)
    {
        auto tokens = Parser::split(line);
        
        if (tokens.size() < 4) return Employee(); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double salary = stod(tokens[3]);
        return Employee (id, name, pass, salary);
    }
    static Admin   parseToAdmin(const string& line)
    {
        auto tokens = split(line);
        
        if (tokens.size() < 4) return Admin (); 
        int id = stoi(tokens[0]);
        string name = tokens[1];
        string pass = tokens[2];
        double salary  = stod(tokens[3]);
        return Admin  (id, name, pass, salary);
    }
                
};
