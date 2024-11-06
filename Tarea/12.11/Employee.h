#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"  // Incluir la clase Date para la fecha de nacimiento.

class Employee {
public:
    Employee(const std::string&, const std::string&, const std::string&, const Date&);
    virtual ~Employee() = default;

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;

    void setBirthDate(const Date&);
    Date getBirthDate() const;  // Getter para la fecha de nacimiento.

    virtual double earnings() const = 0;
    virtual std::string toString() const;

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    Date birthDate;  // Fecha de nacimiento.
};

#endif
