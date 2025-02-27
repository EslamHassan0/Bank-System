 
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
        
        cout<<admin.<<endl;
        
        FilesHelper::saveAdmin(admin, adminsFile);
        
    }

    void getAllClients() const  override
    {
         FilesHelper::getClients(this->clientsFile);

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
