#ifndef COMISSION_H
#define COMISSION_H

#include <string>
#include "Employee.h"

class ComissionEmployee : public Employee {
public:
    ComissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double = 0.0);
    virtual ~ComissionEmployee() = default;

    void setComissionRate(double);
    double getComissionRate() const;

    void setGrossSales(double);
    double getComissionRate() const;

    virtual double earnings() const override;
    virtual std::string toString() const override;
private:
    double grossSales;
    double comissionRate;
};

#endif