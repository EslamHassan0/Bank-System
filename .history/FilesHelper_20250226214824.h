
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
        out << c.id << "," << c.name << "," << c.password << "," << c.balance << "\n";
        out.close();
        }
    }

static void saveEmployee(const Employee& e, string fileName){
    fstream out(fileName, std::ios::app);
    if (out.is_open())
    {
        out << e.id << "," << e.name << "," << e.password << "," << e.salary << "\n";
        out.close();
    }
}

static void getClients(sting fileName){
    fstream in(fileName);
    if (!in.is_open()) {
        std::cerr << "Error: Cannot open Clients.txt" << std::endl;
        return;
    }
    string line;
    while(getline(in,line)){
    if(line.empty()){
        continue;
    }
    Client client = Parser.parseToClient(line);
    client.display();
    }
    in.close();
    }

    static void getEmployees(sting fileName){
        fstream in(fileName);
        if (!in.is_open()) {
            std::cerr << "Error: Cannot open Employee.txt" << std::endl;
            return;
        }
        string line;
        while(getline(in,line)){
        if(line.empty()){
            continue;
        }
        Employee employee = Parser.parseToEmployee(line);
        employee.display();
        }
        in.close();
    }

    static void getAdmins(sting fileName){
            fstream in(fileName);
            if (!in.is_open()) {
                std::cerr << "Error: Cannot open Admin.txt" << std::endl;
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
        static void clearFile(const std::string& fileName,string lastIdFile)
        {
            fstream out(fileName, std::ios::trunc);
            out.close();
        }
}