#pragma once
#include <iostream>
using namespace std;


class IDataSource {
public:
    virtual void addClient(const Client& client) = 0;           
    virtual void addEmployee(const Employee& employee) = 0;     
    virtual void addAdmin(const Admin& admin) = 0;              

    virtual void getAllClients() const = 0;                     
    virtual void getAllEmployees() const = 0;                   
    virtual void getAllAdmins() const = 0;                      

    virtual void removeAllClients() = 0;                        
    virtual void removeAllEmployees() = 0;                      
    virtual void removeAllAdmins() = 0;                         

    virtual ~IDataSource() = default;                           
};
