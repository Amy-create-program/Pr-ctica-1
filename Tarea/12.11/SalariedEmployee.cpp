#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h"
#include "Date.h"  // Incluir la clase Date.
using namespace std;

SalariedEmployee::SalariedEmployee(const string& first,
    const string& last, const string& ssn, const Date& birth, double salary)
    : Employee(first, last, ssn, birth) {
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Weekly salary must be >= 0.0");
    }
    weeklySalary = salary;
}

double SalariedEmployee::getWeeklySalary() const { return weeklySalary; }

double SalariedEmployee::earnings() const {
    double salary = getWeeklySalary();
    
    // Comprobar si es el mes del cumpleaños y agregar el bono.
    Date currentDate(11, 5, 2024); // Este valor puede ser actualizado dinámicamente.
    if (currentDate.getMonth() == getBirthDate().getMonth()) {
        salary += 100.0;  // Agregar el bono de cumpleaños.
    }

    return salary;
}

string SalariedEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Salaried employee: "
        << Employee::toString() 
        << "\nWeekly salary: " << getWeeklySalary();
    return output.str();
}
