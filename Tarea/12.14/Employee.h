#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& first, const std::string& last, const std::string& ssn)
        : firstName(first), lastName(last), socialSecurityNumber(ssn) {}

    virtual ~Employee() = default;

    void setFirstName(const std::string& first) { firstName = first; }
    std::string getFirstName() const { return firstName; }

    void setLastName(const std::string& last) { lastName = last; }
    std::string getLastName() const { return lastName; }

    void setSocialSecurityNumber(const std::string& ssn) { socialSecurityNumber = ssn; }
    std::string getSocialSecurityNumber() const { return socialSecurityNumber; }

    virtual double earnings() const = 0;
    virtual std::string toString() const {
        return getFirstName() + " " + getLastName() + "\nsocial security number: " + getSocialSecurityNumber();
    }

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
};

#endif
