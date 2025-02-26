
#include <fstream>
#include <string>
#include <iostream>
#pragma once
#include "Person.h"
#include "fstream"
using namespace std;

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        
        
        fileName = "FileReadSystem/Emps.txt";
        fstream file(fileName, ios::app);
    }
}