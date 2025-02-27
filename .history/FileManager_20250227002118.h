 
#include "IDataSource.h"
#include "FilesHelper.h"
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

    void getAllClients() const  override
    {
         FilesHelper::getClients(this->clientsFile);
        for(auto client:clients){
            cout << "client ID: " << client.id 
            << ", Name: " << client.name 
            << ", Password: " << client.password 
            << ", balance: " << client.balance <<endl;
        }

    }

    void getAllEmployees()const  override
    {
         FilesHelper::getEmployees(this->employeesFile);
    }

    void getAllAdmins() const  override
    {

         FilesHelper::getAdmins(this->adminsFile);
    
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
