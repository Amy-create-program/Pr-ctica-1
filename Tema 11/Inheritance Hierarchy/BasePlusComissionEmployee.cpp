#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "BasePlusComissionEmployee.h"
using namespace std;

BasePlussComissionEmployee::BasePlussComissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary)

    : ComissionEmployee(first, last, ssn, sales, rate) {
        setBaseSalary(salary);
    }
void BasePlusComissionEmployee::setBaseSalary(const salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
        baseSalary = salary;
    }
}
