#include <sstream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string& first, const string& last,
    const string& ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn) {}

void Employee::setFirstName(const string& first) {firstName = first;}

string Employee::getFirstName() const {return firstName;}

void Employee::setLastName(const string& last) {lastName= last;}

string Employee::getLastMame() const {return lastName;}

void Employee::setSocialSecurityNumber(const string& ssn){
    socialSecurityNumber =ssn;
}

string Employee::getSocialSecurityNumber() const{
    return socialSecurityNumber
}

string Employee::toString() const{
    return getFirstName() + " "s + getLastMame() +
        "\nsocial security number: "s + getSocialSecurityNumber();
}