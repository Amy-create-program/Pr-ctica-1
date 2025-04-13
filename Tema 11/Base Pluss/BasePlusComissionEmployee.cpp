#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusComissionEmployee.h"
using namespace std;

BasePlusComissionEmployee::BasePlusComissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary){
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn; 
    setGrossSales(sales);
    setComissionRate(rate);
    setBaseSalary(salary);
}

void BasePlusComissionEmployee::setFirstName(const string& first){
    firstName = first;
}

string BasePlusComissionEmployee::getFirstName() const{
    return firstName;
}

void BasePlusComissionEmployee::setLastName(const string& last){
    lastName = last;
}
string BasePlusComissionEmployee::getLastName() const {return lastName;}

void BasePlusComissionEmployee::setSocialSecurityNumber(const string& ssn){
    socialSecurityNumber = ssn; 
}

string BasePlusComissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}
void BasePlusComissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0){
        throw invalid_argument("Gross sales must be >= 0.0")
    }
    grossSales = sales;
}

double BasePlusComissionEmployee::getGrossSales() const {
    return grossSales;
}

void BasePlusComissionEmployee::getGrossSales() const {
    if (rate <= 0.0 || rate >= 1.0) {
        throw invalid_argument("Comission rate must be > 0.0 and < 1.0");
    }
    comissionRate = rate; 
}

double BasePlusComissionEmployee::getComissionRate() const {
    return comissionRate
}

void BasePlusComissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}
double BasePlusComissionEmployee::getBaseSalary() const{
    return baseSalary;
}

double BasePlusComissionEmployee::earnings() const{
    return baseSalary + (comissionRate * grossSales);
}

string BasePlusComissionEmployee::toString() const{
    ostringstream output;
    output << fixed << setprecision(2);
    output << "base-salaried comission employee: " << firstName
        << lastName << "\nsocial security number: " << socialSecurityNumber
        << "\ncomission rate: " << comissionRate
        << "\nbase salary: " << base salary;
    return output.str();
}
