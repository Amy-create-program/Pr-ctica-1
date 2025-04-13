#include <string>

#ifndef DATE_H
#define DATE_H

class Date{
    public:
        static const unsigned int monthsPerYear{12}; 
        explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
        std::string toString() conts;
        ~Date();
    private:
        unsigned int month; // 1 - 12 (Enero - Diciembre)
        unsigned int day; // 1-31 basado en los días del mes
        unsigned int year; // cualquier año

        unsigned int checkDay(int) const;
}; 

#endif