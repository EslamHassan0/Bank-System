#pragma once
#include <iostream>
#include "Person.h"
#include "fstream"
using namespace std;


class Employee : public Person{
protected:
    double salary;
    string fileName;
    char choice;
public:
    Employee() {}
    Employee(int id, string name, string password, double salary) : Person(id, name, password) {
        setSalary(salary);
    }
    // setters
    void setSalary(double salary) { 
        while (true) {
            try {
                cout << "Enter Salary: ";
                cin >> salary;
                if (salary <= 5000) {
                    throw checkSalary();
                }
                this->salary = salary;
                break;
            } catch (const checkSalary& e) {
                cout << "Error: " << e.what() << endl;
            }
        }
    }
    void addEmployee(){
        fileName = "FileReadSystem/Emps.txt";
        fstream file(fileName, ios::app);
        file << getId() << "|" << getName() << "|" << getPassword() << "|" << getSalary() << endl;
        cout << "Employee added successfully!" << endl;
        file.close();
    }
    void invoke() {
        do {
            collectData();
            setSalary(salary);
            addEmployee();
            cout << "Do you want to add another employee? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
    // getters
    double getSalary() {
       return salary;
    }

   void display() {
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Password: " << getPassword() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};
