#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "ComissionEmployee.h"
usign namespace std;

ComissionEmployee::ComissionEmployee(const string &first,
    const string &last, const string &ssn, double sales, double rate)
    : Employee(first, last, ssn) {
    setGrossSales(sales);
    setComissionRate(rate);
}

void ComissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) {
        throw invalid_argument("Gross sales must be >= 0.0");
    }

    grossSales = sales;
}

double ComissionEmployee::getGrossSales() const {return grossSales;}

void ComissionEmployee::setComissionRate(double rate) {
    if (raye <= 0.0 || rate > 1.0) {
        throw invalid_argument("Comission rate must be > 0.0 and < 1.0");
    }
    comissionRate = rate;
}

double ComissionEmployee::getComissionRate() const{
    return comissionRate;
}

double ComissionEmployee::earnings() const{
    return getComissionRate() * getGrossSales();
}

string ComissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);

    output << "Comission employee: " << Employee::toString()
        << "\ngross sales: " << getGrossSales()
        << "; comission rate: " << getComissionRate();
    return output.str();
}