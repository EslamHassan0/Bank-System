#include <iostream>
#include "Emplyee.h"
using namespace std;

class Admin : public Employee {
    public:
        Admin() {}  
        Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary) {}

        // setters
    void setId(int id) { Employee::setId(id); }
    void setName(string name) { Employee::setName(name); }
    void setPassword(string password) { Employee::setPassword(password); }
    void setSalary(double salary) { Employee::setSalary(salary); }

    // getters
    int getId(){return Employee::getId();}
    string getName(){return Employee::getName();}
    string getPassword(){return Employee::getPassword();}
    double getSalary() {return Employee::getSalary();}
};