 
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
        FilesHelper.saveClient(client, clientsFile);
        
    }
    
};
