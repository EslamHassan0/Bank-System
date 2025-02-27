#include <iostream>
#include "Person.h"
// #include "Employee.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main() {

    

    FileManager fl;
    Admin a1(100, "Boss", "bossPass", 5000.0);
    fl.addAdmin(a1);
    Employee p1;
    p1.invoke();
    return 0;
}
