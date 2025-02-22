#include <iostream>
#include "Person.h"
#include "Employee.h"
using namespace std;

int main() {
        Employee p1;
    p1.setId(0);  // Set ID using the setter
    p1.setName("");  // Set Name using the setter
    p1.setPassword("");  // Set Password using the setter
    p1.setSalary(0);
    p1.display();
   
    
}
