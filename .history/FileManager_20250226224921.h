 
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
    
    void addAdmin(const Admin& admin) override {
        FilesHelper::saveAdmin(admin, adminsFile);
        
    }

    void getAllClients() override
    {
        return FilesHelper::getClients(clientsFile);
    }

    void getAllEmployees() override
    {
        return FilesHelper::getEmployees(employeesFile);
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
