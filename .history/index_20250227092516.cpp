#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Client.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main() {

    void invoke() {
        do {
            FileManager fileM;
            collectData();//person
            setBalance(this->balance);
            fileM.addClient(*this);
            cout << "Do you want to add another employee? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }

    invoke();
    return 0;
}
