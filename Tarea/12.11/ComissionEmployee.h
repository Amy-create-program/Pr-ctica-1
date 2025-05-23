#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> 
#include "Employee.h"

class CommissionEmployee {
public:
    CommissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double = 0.0);
    virtual ~CommissionEmployee() = default; 

    void setCommissionRate(double); 
    double getCommissionRate() const; 

    void setGrossSales(double); 
    double getGrossSales() const; 

private:
    double grossSales; 
    double commissionRate; 
};

#endif 