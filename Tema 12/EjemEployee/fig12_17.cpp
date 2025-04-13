#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employeee* const);
void virtualViaReference(const Employee&);

int main() {
    cout << fixed << setprecision(2);

    SalariedEmployee SalariedEmployee{
        "Jhon", "Smith", "111-11-1111". 800};
    ComissionEmployee comissionEmployee{
        "Sue", "Jones", "333-33-3333", 10000, .06};

    cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDINF \n"
        << salariedEmployee.toString()
        << "\nearned $" << salariedEmployee.earnings() << "\n\n"
        << comissionEmployee.toString()
        << "\nearned $" << comissionEmployee.earnings() << "\n\n"
        << basePlusComissionEmployee.toString()
        << "\nearned $" << basePlusComissionEmployee, &comissionEmployee,
            &basePlusComissionEmployee};
    vector <Employee *> employees{&salariedEmployee, &comissionEmployee,
        &basePlusComissionEmployee};

    cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";

    cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";

    for (const Employee* employeePtr : employees){
        virtualViaPointer(employeePtr);
    }

    cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";

    for (const Employee* employeePtr : employees){
        virtualViaReference(*employeePtr);
    }

