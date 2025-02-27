#include <iostream>
#include "Person.h"
using namespace std;

class Client : public Person{
protected:
    double balance;
public:
    Client() {}
    Client(int id, string name, string password, double balance) : Person(id, name, password) {
        setBalance(balance);
    }

    // setters
    void setBalance(double balance) { 
        if(balance <= 1500) 
            throw checkBalance();
        this->balance = balance; 
    }
    // getters
    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
        }
    }
    void transferTo(Client& recipient, double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            recipient.deposit(amount);
        }
    }
    void checkBalance() {
        while (true) {
            try {
                cout << "Enter Balance: ";
                cin >> balance;
                if (balance <= 1500) {
                    throw checkBalance();
                }
                return balance;
            } catch (const checkBalance& e) {
                cout << "Error: " << e.what() << endl;
            }
        }
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
};
