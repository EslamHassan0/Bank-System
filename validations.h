
#ifndef VALIDATIONS_H
#define VALIDATIONS_H

#include <iostream>
#include <string>
#include <exception>
using namespace std;
class nameSize : public exception{
public:
    virtual const char* what() const throw()
    {
        return "Name Must be greater than 5 characters and less than 20 characters";
    }
};
class passwordSize : public exception{
    public:
        virtual const char* what() const throw()
        {
            return "Password Must be greater than 5 characters and less than 20 characters";
        }
};
class checkBalance : public exception{
    public:
        virtual const char* what() const throw()
        {
            return "Balance Must be greater than 1500";
        }
};
class checkSalary : public exception{
    public:
        virtual const char* what() const throw()
        {
            return "Salary Must be greater than 5000";
        }
};

#endif
