#include <iostream>
#include "Person.h"
using namespace std;

class Employee : public Person{
protected:
    double salary;
public:
    Employee() {}
    Employee(int id, string name, string password, double salary) : Person(id, name, password) {
        this->salary = salary;
    }
    // setters
    void setId(int id) { Person::setId(id); }
    void setName(string name) { Person::setName(name); }
    void setPassword(string password) { Person::setPassword(password); }
    void setSalary(double salary) { this->salary = salary; }

    // getters
    int getId(){return person::getId();}
    string getName(){return person::getName();}
    string getPassword(){return person::getPassword();}
    double getSalary() {
        while (true) {
            try {
                cout << "Enter Salary: ";
                cin >> balance;
                if (salary <= 5000) {
                    throw checkSalary();
                }
                return salary;
            } catch (const checkSalary& e) {
                cout << "Error: " << e.what() << endl;
            }
        }
    }

};