#include <string>
#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"
using namespace std;

int main() {
    BasePlusComissionEmployee basePlusComissionEmployee{
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300};

    ComissionEmployee* comissionEmployeePtr{&basePlusComissionEmployee};

    string firstName{comissionEmployeePtr->getFirstname()};
    string lastName{comissionEmployeePtr->getLastName()};
    string ssn{comissionEmployeePtr->getSocialSecurityNumber()};
    double grossSales{comissionEmployeePtr->getGrossSales()};
    double comissionRate{comissionEmployeePtr->getComissionRate()};

    double baseSalary{comissionEmployeePtr->getBaseSalary()};
    comissionEmployeePtr->setBaseSalary(500);
}