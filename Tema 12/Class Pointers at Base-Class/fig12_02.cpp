#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"

int main(){
    ComissionEmployee comissionEmployee{
        "Sue", "Jones", "222-22-2222", 10000, .06};

    BasePlusComissionEmployee* basePlusComissionEmployeePtr{
        &comissionEmployee};

}
