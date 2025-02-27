 
#include "IDataSource.h"
using namespace std;

class FileManager : public IDataSource {
 private:
    string clientsFile   = "FileReadSystem/Clients.txt";
    string employeesFile = "FileReadSystem/Employee.txt";
    string adminsFile    = "FileReadSystem/Admin.txt";

    public:
    void addClient(const Client& client) override {
        FilesHelper.saveClient(client, clientsFile);

    }
    void addEmployee(const Employee& employee) override {
        FilesHelper.saveEmployee(employee, employeesFile);
        
    }
    
    void addAdmin(const Admin& admin) override {
        FilesHelper.saveAdmin(admin, adminsFile);
        
    }

    std::vector<Client> getAllClients() override
    {
        return FilesHelper::getClients(clientsFile);
    }

    vector<Employee> getAllEmployees() override
    {
        return FilesHelper::getEmployees(employeesFile);
    }

    vector<Admin> getAllAdmins() override
    {
        return FilesHelper::getAdmins(adminsFile);
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
