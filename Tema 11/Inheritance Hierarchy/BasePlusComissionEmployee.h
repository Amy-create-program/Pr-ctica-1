#ifndef BASEPLUS_H  
#define BASEPLUS_H

#include <string>
#include "ComissionEmployee.h"

class BasePlussComissionEmployee : public ComissionEmployee {
public: 
    BasePlussComissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double 0.0, double = 0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;

    double earnings() const;
    std::string toString() const;
private: 
    double baseSalary;
};

#endif