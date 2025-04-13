#include <iostream>
#include <sstream>
#include "Employee.h"
#include "Date.h"
using namespace std;

Employee::Employee(const string & first, const string& last, const Date &dateOfBirth, const Date &dateOfHire)
: firstName{first},
  lastName{last},
  birthDate{dateOfBirth},
  hireDate{dateOfHire} {
  cout << "Employee object constructor: "
    << firstName << ' ' << lastName << endl;
  }

string Employee::toString() const{
    ostringstream output;
    output << lastName << ", " << firstname << " Hired: " 
     << hire.Date.toString() << " Birthday: " << birthDate.toString();
    return output.str();
}

Employee::~Employee() {
    cout << "Employee object destructor: " 
        << lastName << ", " << firstName << endl;
}