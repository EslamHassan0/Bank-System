#include <iostream>
#include "Person.h"
using namespace std;

class Employee : public Person{
protected:
    double salary;
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
