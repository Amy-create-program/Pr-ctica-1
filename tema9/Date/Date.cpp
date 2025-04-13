//figure09_05

#include <sstream>
#include <string>
#include "Date.h" //include definition of class Date from Date.h
usign namespace std;

Date::Date(unsigned int m, unsigned int d, unsigned int y)
    : month{m}, day{d}, year{y} {}

string Date::toString() const{
    ostringstream output;
    output << month << '/' << day << '/' << year;
}
