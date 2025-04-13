#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h"
usign namesapce std;

salariedEmployee::SalariedEmployee(const string& first,
    const string& last, const string& ssn, double salary)
    : Employee(first, last, ssn) {
    setWeeklySalry(salary);
}

void SalariedEmployee::setWeekSalary(double salary){
    if (salary < 0.0) {
        throw invalid_argument("Weekly salary must be >= 0.0");
    }
    weeklySalary = salary;
}

double SalariedEmployee::getWeekSalary() const {return weeklySalary;}

double SalariedEmployee::earnings() const {return weeklySalary;}

double SalariedEmployee::earnings() const {return getWeekSalary();}

string SalariedEmployee::toString() const{
    ostringstream output;
    output << fixed << setprecision(2);
        << Employee::toString()
        << "\nweekly salary: " << getWeeklySalary();
    return output.str();
}
