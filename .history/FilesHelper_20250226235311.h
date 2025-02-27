
#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include "Parser.h"
using namespace std;


class Client;
class Employee;
class Admin;

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        // fileName = "FileReadSystem/Emps.txt";
        fstream out(fileName, ios::app);
        if(out.is_open()){
            out<<id;
            out.close();
        }
    }
    static int geLast(string fileName){
        fstream in(fileName);
        if(in.is_open())
        {   
                int id;
                in>>id;
                in.close();
                return id;
        }
        return 0;
    }

    static void saveClient(const Client& c  , string fileName){
    fstream out(fileName, std::ios::app);
    if(out.is_open()){
        out << c.getId() << "," << c.getName() << "," << c.getPassword() << "," << c.getBalance() << "\n";
        out.close();
        }
    }

static void saveEmployee(const Employee& e, string fileName){
    fstream out(fileName, std::ios::app);
    if (out.is_open())
    {
        out << e.getId() << "," << e.getName() << "," << e.getPassword() << "," << e.getSalary() << "\n";
        out.close();
    }
}


static void saveAdmin(const Admin& a, string fileName){
    fstream out(fileName, std::ios::app);
    if (out.is_open())
    {
        out << a.getId << "," << a.getName << "," << a.getPassword << "," << a.getSalary() << "\n";
        out.close();
    }
}
static void getClients(string fileName){
    fstream in(fileName);
    if (!in.is_open()) {
        cout << "Error: Cannot open Clients.txt" << endl;
        return;
    }
    string line;
    while(getline(in,line)){
    if(line.empty()){
        continue;
    }
    Client client = Parser::parseToClient(line);
    client.display();
    }
    in.close();
    }

    static void getEmployees(string fileName){
        fstream in(fileName);
        if (!in.is_open()) {
            cout<< "Error: Cannot open Employee.txt" << endl;
            return;
        }
        string line;
        while(getline(in,line)){
        if(line.empty()){
            continue;
        }
        Employee employee = Parser::parseToEmployee(line);
        employee.display();
        }
        in.close();
    }

    static void getAdmins(string fileName){
            fstream in(fileName);
            if (!in.is_open()) {
                cout << "Error: Cannot open Admin.txt" << endl;
                return;
            }
            string line;
            while(getline(in,line)){
            if(line.empty()){
                continue;
            }
            Admin admin = Parser.parseToAdmin(line);
            admin.display();
             }
            in.close();
        }
        static void clearFile(string fileName)
        {
        
            fstream outLast(fileName, std::ios::trunc);
            if (!outLast.is_open()) {
                cout << "Error: Cannot open " << fileName << " for clearing." <<endl;
            }
            outLast.close();
        }
}