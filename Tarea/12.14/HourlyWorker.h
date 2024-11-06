#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include "Employee.h"

class HourlyWorker : public Employee {
public:
    HourlyWorker(const std::string& first, const std::string& last, const std::string& ssn, double wage, double hours)
        : Employee(first, last, ssn), wagePerHour(wage), hoursWorked(hours) {}

    void setWage(double wage) { wagePerHour = wage; }
    double getWage() const { return wagePerHour; }

    void setHours(double hours) { hoursWorked = hours; }
    double getHours() const { return hoursWorked; }

    double earnings() const override {
        if (hoursWorked > 40) {
            return (40 * wagePerHour) + ((hoursWorked - 40) * wagePerHour * 1.5);
        } else {
            return hoursWorked * wagePerHour;
        }
    }

    std::string toString() const override {
        return "HourlyWorker: " + Employee::toString() + "\nWage per hour: " + std::to_string(wagePerHour)
            + "\nHours worked: " + std::to_string(hoursWorked);
    }

private:
    double wagePerHour;   // Salario por hora
    double hoursWorked;   // Horas trabajadas
};

#endif
