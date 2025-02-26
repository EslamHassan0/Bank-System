
#include <fstream>
#include <string>

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        fstream file(fileName, ios::app);
    }
}