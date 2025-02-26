
#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        
        fileName = "FileReadSystem/Emps.txt";
        fstream ou(fileName, ios::app);
    }
}