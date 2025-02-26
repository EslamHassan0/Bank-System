
#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class FilesHelper{
    public:
    static void SaveLast(string fileName , int id){
        fileName = "FileReadSystem/Emps.txt";
        fstream out(fileName, ios::app);
        if(out.is_open()){
            out<<id;
            out.close();
        }
    }
    static int geLast(string fileName){
        fstream in(fileName);
        if(in.is_open())
        {   
                int id;
                in>>id;
                in.close();
                return id;
        }
        return 0;
    }

 static void saveClient()
}