#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Person.h"

using namespace std;

class FileManager;

class Client : public Person{
protected:
    double balance;
    char choice;
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
    double getBalance()  const{
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
    // double checkBalance() {
    //     while (true) {
    //         try {
    //             cout << "Enter Balance: ";
    //             cin >> balance;
    //             if (balance <= 1500) {
    //                 throw checkBalance();
    //             }
    //             return balance;
    //         } catch (checkBalance& e) {
    //             cout << "Error: " << e.what() << endl;
    //         }
    //     }
    // }


    void invoke() {
        do {
            FileManager fileM; // No issue because we only declare it here
            collectData(); // From Person
            fileM.addClient(*this);
            std::cout << "Do you want to add another employee? (y/n): ";
            char choice;
            std::cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }

    void display() {
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Password: " << getPassword() << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};
#endif