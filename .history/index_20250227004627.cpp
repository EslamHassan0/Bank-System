#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main() {

    

    FileManager fl;
    Admin a1(50, "Boss", "bossPass", 5000.0);
    a1.setName("Boss");
    a1.setPassword("bossPass")
    fl.addAdmin(a1);
    // Employee p1;kareem
    // p1.invoke();
    return 0;
}
