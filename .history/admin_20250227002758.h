#pragma once

#include <iostream>
#include "Employee.h"
using namespace std;

class Admin : public Employee {
    public:
        Admin() {}  
        Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary) {}
};
