
#include <fstream>
#include <string>
#include <iostream>

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        fstream file(fileName, ios::app);
    }
}