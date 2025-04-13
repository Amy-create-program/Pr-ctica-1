#include <iostream>
#include <iomanip>
#include "ComissionEmployee.h"
using namespace std;

int main() {
    ComissionEmployee employee{"Sue", "Jones", "222-22-2222", 10000, .06};

    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast names is " << employee.getLastName()
        << "\nSocial security number is " 
        << employee.getSocialSecurityNumber()
        <<"\nGross sales is " << employee.getGrossSales()
        <<"\nComission rate is " <<< employee.getComissionRate() << endl;
    employee.setGrosssales(8000);
    employee.setComissionRate(.1);
    cout << "\nUpdate employee information from function toString: \n\n" 
        << employee.toString();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}