#include <sstream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string& first, const string& last,
    const string& ssn, const Date& birth)
    : firstName(first), lastName(last), socialSecurityNumber(ssn), birthDate(birth) {}

void Employee::setFirstName(const string& first) { firstName = first; }
string Employee::getFirstName() const { return firstName; }

void Employee::setLastName(const string& last) { lastName = last; }
string Employee::getLastName() const { return lastName; }

void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::setBirthDate(const Date& birth) {
    birthDate = birth;
}

Date Employee::getBirthDate() const {
    return birthDate;
}

string Employee::toString() const {
    return getFirstName() + " " + getLastName() +
        "\nsocial security number: " + getSocialSecurityNumber() +
        "\nbirth date: " + birthDate.toString();  // Agregar la fecha de nacimiento.
}
