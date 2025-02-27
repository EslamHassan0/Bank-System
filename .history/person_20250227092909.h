
#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

// define validation class
#include "Validations.h"

class Person{
    protected:
        int id;
        string name, password;
    public:
    // default ctrs
        Person(){}
    // parametariza ctrs
        Person(int id, string name, string password){
            this->id = id;
           setName(name);
            setPassword(password);
        }
        //setters
        void const setId(int id){
            cout << "Enter your Id: ";
                cin >> id;
            this->id = id;
        }
        void setName(string name){
            while (true) {
                try {
                    cout << "Enter your Name: ";
                    cin >> name;
                    if (name.length() <= 5 || name.length() >= 20) {
                        throw nameSize();
                    }
                    this->name = name;
                    break;
                } catch (const nameSize& e) {
                    cout << "Error: " << e.what() << endl;
                }
            }
        }
        void setPassword(string password){
            while (true) {
                try {
                    cout << "Enter your password: ";
                    cin >> password;
                    if (password.length() <= 5 || password.length() >= 20) {
                        throw passwordSize();
                    }
                    this->password = password;
                    break;
                } catch (const passwordSize& e) {
                    cout << "Error: " << e.what() << endl;
                }
            }
        }

        void collectData() {
            setId(id);
            setName(name);
            setPassword(password);
        }
        //getters
        int  getId() const {
            
            return id;
        }
        string getName() const {
            return name;
        }
        string getPassword() const{
            return password;
        }
};
