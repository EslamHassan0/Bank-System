#include <iostream>
#include "Emplyee.h"
using namespace std;

class Admin : public Employee {
    public:
        Admin() {}  
        Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary) {}
};
