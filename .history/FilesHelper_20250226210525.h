
#include <fstream>
#include <string>
#include <iostream>

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        
        
        fileName = "FileReadSystem/Emps.txt";
        fstream file(fileName, ios::app);
    }
}