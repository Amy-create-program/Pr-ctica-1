//fig 9.1: Time.h
//Time class definition. Clase Time definición 
//Member funtions are defined in Time.cpp
#include <string>
using namespace std;

//prevent multiple inclusions of header 
#ifndef TIME_H //Si no esta definido
#define TIME_H //Define

//Time class definition
class Time{
    public:
        void setTime(int, int, int); //para la hora, los minutos y los segundos
        string toUniversalString() const; // 24 horas en formato string
        string toStandardString() const; // 12 horas en formato string
    private:
        unsigned int hour {0}; // 0 - 23 (24-hour clock format) //24 horas
        unsigned int minute {0}; // 0 - 59 minutos
        unsigned int second {0}; // 0 - 59 segundos
};

#endif //siempre se termina con el endif