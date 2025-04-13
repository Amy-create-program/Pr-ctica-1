#include <iomanip>
#include <stdexcept> 
#include <sstream>
#include "BasePlusComissionEmployee.h"
using namespace std;

BasePlusComissionEmployee::BasePlusComissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary)
    : ComissionEmployee(first, last, ssn, sales, rate){
    setBaseSalary(salary);
}

void BasePlusComissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0){
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

double BasePlusComissionEmployee::getBaseSalary() const{
    return baseSalary;
}

double BasePlusComissionEmployee::earnings() const{
    return getBaseSalary() + ComissionEmployee::earnings();
}

string BasePlusComissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "base-salaried " << ComissionEmployee::toString()
        << "; base salary: " << getBaseSalary();
    return output.str();
}
