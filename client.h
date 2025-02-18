#include <iostream>
#include "Person.h"
using namespace std;

class Client : public Person{
protected:
    double balance;
public:
    Client() {}
    Client(int id, string name, string password, double balance) : Person(id, name, password) {
        this->balance = balance;
    }

    // setters
    void setId(int id) { Person::setId(id); }
    void setName(string name) { Person::setName(name); }
    void setPassword(string password) { Person::setPassword(password); }
    void setBalance(double balance) { this->balance = balance; }
    // getters
    int getId(){return person::getId();}
    string getName(){return person::getName();}
    string getPassword(){return person::getPassword();}
    double getBalance() {
        if(balance <= 1500) 
            throw checkBalance();
        return balance
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
};