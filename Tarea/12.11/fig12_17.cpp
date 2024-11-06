#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2); 

    Date birthDate1(5, 11, 1990);  // Fecha de nacimiento del empleado 1.
    SalariedEmployee salariedEmployee{
        "John", "Smith", "111-11-1111", birthDate1, 800};

    Date birthDate2(5, 11, 1985);  // Fecha de nacimiento del empleado 2.
    CommissionEmployee commissionEmployee{
        "Sue", "Jones", "333-33-3333", 10000, .06, birthDate2};

    Date birthDate3(11, 5, 1980);  // Fecha de nacimiento del empleado 3.
    BasePlusCommissionEmployee basePlusCommissionEmployee{
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300, birthDate3};

    cout << "Employees processed individually:\n"
        << salariedEmployee.toString() << "\nEarned: $" << salariedEmployee.earnings() << "\n\n"
        << commissionEmployee.toString() << "\nEarned: $" << commissionEmployee.earnings() << "\n\n"
        << basePlusCommissionEmployee.toString() << "\nEarned: $" << basePlusCommissionEmployee.earnings() << "\n\n";

    vector<Employee*> employees{&salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee};

    cout << "Employees processed polymorphically:\n";
    for (const Employee* employeePtr : employees) {
        cout << employeePtr->toString() << "\nEarned: $" << employeePtr->earnings() << "\n\n";
    }

    return 0;
}
