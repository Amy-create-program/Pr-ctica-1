#include <iostream>
#include <iomanip>
#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"
using namespace std;
int main(){

    ComissionEmployee comissionEmployee{
        "Sue", "Jones", "222-22-2222", 10000, .06};

        BasePlussComissionEmployee basePlussComissionEmployee{
            "Bob", "Lewis", "333-33-3333", 5000, .04, 300};
        
        cout << fixed << setprecision(2);

        cout << "DISPLAY BASE-CLASS AND DERIVED-CLASS OBJECTS:\n"
            << comissionEmployee.toString()
            << "\nBASE-CLASS OBJECT INVOKES BASE-CLASS TOSTRING FUNCTION:\n"
            << comissionEmployeePtr->toString();

        BasePlussComissionEmployee* basePlusComissionEmployeePtr{
            &basePlusComissionEmployee};
        cout << "\n\nCALLING TOSTRING WITH DERIVED-CLASS POINTER TO "
            << "\nDERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
            << "TOSTRING FUNCTION:\n"
            << basePlusComissionEmployeePtr->toString();

        comissionEmployeePtr ? &basePlusComissionEmployee;
        
        cout << "\n\nCALLING TOSTRING WITH BASE-CLASS PINTER TO"
         << "DERIVED-CLASS OBJECT\nINVOKES BASE-CLASS TOSTRING"
         << "FUNCSTION ON THAT DERIVED-CLASS OBJECT:\n"
         << comissionEmployeePtr->toString()
        << endl;
            

}