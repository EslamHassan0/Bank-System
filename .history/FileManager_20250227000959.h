 
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
        auto employees =  FilesHelper::getEmployees(this->employeesFile);

        for(auto employee:employees){
            cout << "Employee ID: " << employee.id 
            << ", Name: " << employee.name 
            << ", Password: " << employee.password 
            << ", Salary: " << employee.salary <<endl;
        }
    }

    void getAllAdmins() const  override
    {

        auto admins = FilesHelper::getAdmins(this->adminsFile);

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
