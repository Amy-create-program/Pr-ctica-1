//Fig. 9.5: Time.h
//Time class containing a constructor with default arguments.
//Member functions defined in Time.cpp
#include <string>
using namespace std;
// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
    public: 
        explicit Time(int = 0, int = 0, int = 0) //default constructor

        //set functions
        void setTime(int, int, int); // establecer hora, minuto, segundos
        void setHour(int); //set hour (despues de la validación)
        void setMinute(int); //set minute (después de la validación)
        void setSecont(int); //set second (después de la validación)

        //get functions
        unsigned int getHour() const; //return hour
        unsigned int getMinute() const; //return minute
        unsigned int getSecond() const; //return second

        string toUniversalString() const; //24 horas de tiempo en formate string
        string toStandardString() const; //12 horas de tiempo en formato string
    private: 
        unsigned int hour{0} // 0 - 23 (24 horas en formate)
        unsigned int minute{0}; //0 - 59
        unsigned int second{0}; //0 - 59
}

#endif