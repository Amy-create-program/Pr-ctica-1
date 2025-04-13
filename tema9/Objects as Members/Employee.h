#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEEE_H

#include <string>
#include "Date.h"

class Employee{
    public:
        Employee(const std::string&, const std::string&, const Date&, const Date&);
        ~Employee();
    private:
        std::string firstName;
        std::string lastName;
        const Date birthDate;
        const Date hireDate;
};

#endif