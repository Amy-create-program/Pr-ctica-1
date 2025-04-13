#ifndef BASEPLUS_H
#define BASEpLUS_H

#include <string>
#include "ComissionEmployee.h"

class BasePlusComissionEmployee : public ComissionEmployee {
public:
    BasePlusComissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double = 0.0, double = 0.0);
    virtual ~BasePlusComissionEmployee() = default;

    void setBaseSalary(double);
    double getBaseSalary() const;
    virtual double earnings() const override;
    virtual std::string toString() const override;
private:
    double baseSalary;
};

#endif 