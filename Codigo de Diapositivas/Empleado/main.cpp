#include <iostream>
#include "Employee.h"

using namespace std;

int main(){
    Employee employeeStack[5]={
        Employee("Julio ", "Zela "),
        Employee("Octavii ", "Muñoz "),
        Employee("Ricardo ","Palma "),
        Employee("Caballero ","Carmelo "),
        Employee("Alvaro ", "Cuadros")
    };

    Employee* employeeHeap = new Employee[5]{
        Employee("Leandro ","Ayala "),
        Employee("Jordan ", "Castelo "),
        Employee("Vasco ", "Gutierrez "),
        Employee("Miram ","Malaga "),
        Employee("Mirta ","Malaga ")
    };

    delete[] employeeHeap; //libera la memoria
    cout << "Despues de liberar:" << Employee::getCount() << endl;

    Employee* emplodina1; 
    Employee* emplodina2;
    if(true) {
        emplodina1 = new Employee("obj1 ", "obj1");
        emplodina2 = new Employee("obj2 ", "obj2");
    }
    delete emplodina1; //libera la memoria
    delete emplodina2;

    cout << "Liberar memoria: " << Employee::getCount() << endl;

    return 0;
}