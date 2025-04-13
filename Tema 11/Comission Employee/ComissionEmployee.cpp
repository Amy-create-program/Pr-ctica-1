#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "ComissionEmployee.h"
using namespace std;

//Constructor
ComissionEmployee::ComissionEmployee(const string& first,
    const string& last, const string& ssn, souble sales, double rate) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrosssales(sales);
    setComissionRate(rate);
}

void ComissionEmployee::setFirstName() (const string& first){
    firstName = first;
}

string ComissionEmployee::getFirstName() const {return firstName;}

void ComissionEmployee::setLastName(const string& last){
    lastName = last;
}

string ComissionEmployee::getLastName() const {return lastName;}

void ComissionEmployee::setSocialSecurityNumber(const string& snn){
    SocialSecurityNumber
}

string ComissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void ComissionEmployee::setGrossSales(double sales){
    if (sales < 0.0 || rate >= 1.0){
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}

double ComissionEmployee::getGrossSales() const {return grossSales;}

void ComissionEmployee::setComissionRate(double rate){
    if(rate <= 0.0 || rate >= 1.0){
        throw invalid_argument("Comission rate must be > 0.0 and < 1.0")
    }
    comissionRate = rate; 
}

double ComissionEmployee::getComissionRate() const {
    return comissionRate;
}

double ComissionEmployee::earnings() const {
    return comissionRate * grossSales;
}

string ComissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "comission employee: " << firstName << " " << lastName
           << "\nsocial security number: " << socialSecurityNumber
           <<"\ncomission rate: " << comissionRate;
    return output.str();
}

