#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main() {

    

    FileManager fl;
    Admin a1();
    fl.addAdmin(a1);
    // Employee p1;kareem
    // p1.invoke();
    return 0;
}
