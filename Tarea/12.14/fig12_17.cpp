#include <iostream>
#include <vector>
#include <string>
#include "Employee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

int main() {
    std::vector<Employee*> employees;

    // Crear instancias de PieceWorker
    PieceWorker pieceWorker("John", "Doe", "111-11-1111", 5.0, 100);
    employees.push_back(&pieceWorker);

    // Crear instancias de HourlyWorker
    HourlyWorker hourlyWorker("Jane", "Smith", "222-22-2222", 15.0, 45);
    employees.push_back(&hourlyWorker);

    // Procesar empleados e imprimir sus datos
    for (Employee* employee : employees) {
        std::cout << employee->toString() << "\nEarned: $" << employee->earnings() << "\n\n";
    }

    return 0;
}
