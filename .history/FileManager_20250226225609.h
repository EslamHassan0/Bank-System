 
#include "IDataSource.h"
using namespace std;

class FileManager : public IDataSource {
 private:
    string clientsFile   = "FileReadSystem/Clients.txt";
    string employeesFile = "FileReadSystem/Employee.txt";
    string adminsFile    = "FileReadSystem/Admin.txt";

    public:
    void addClient(const Client& client) override {
        FilesHelper::saveClient(client, clientsFile);

    }
    void addEmployee(const Employee& employee) override {
        FilesHelper::saveEmployee(employee, employeesFile);
        
    }
    
    void  addAdmin(const Admin& admin) override {
        FilesHelper::saveAdmin(admin, adminsFile);
        
    }

    void getAllClients() override
    {
        auto clients  = FilesHelper::getClients(clientsFile);
        for(auto client:clients){
            cout << "client ID: " << client.id 
            << ", Name: " << client.name 
            << ", Password: " << client.password 
            << ", balance: " << client.balance <<endl;
        }

    }

    void getAllEmployees() override
    {
        auto employees =  FilesHelper::getEmployees(employeesFile);

        for(auto employee:employees){
            cout << "Employee ID: " << employee.id 
            << ", Name: " << employee.name 
            << ", Password: " << employee.password 
            << ", Salary: " << employee.salary <<endl;
        }
    }

    void getAllAdmins() override
    {

        auto admins = FilesHelper::getAdmins(adminsFile);

        for(auto admin:admins){
            cout << "Admin ID: " << admin.id 
            << ", Name: " << admin.name 
            << ", Password: " << admin.password 
            << ", Salary: " << admin.salary <<endl;
        }
    
    }

    void removeAllClients() override
    {
        FilesHelper::clearFile(clientsFile);
    }

    void removeAllEmployees() override
    {
        FilesHelper::clearFile(employeesFile);
    }

    void removeAllAdmins() override
    {
        FilesHelper::clearFile(adminsFile);
    }
    
};
