//Fig 9.2: Time.cpp
//Time class member.function definitions.
#include <iomanip> //for setw and setfill stream manipulators
#include <stdexcept> //for invalid_argument exception class (excepciones)
#include <sstream> // for ostringtream class (trabajar en stream)
#include <string>
#include "Time.h" //include definition of class Time from Time.h

using namespace std;

//set new Time value using universal time
void Time::setTime(int h, int m, int s){ //esto los vincula a la definición de clase Tiempo, para especificar, hacia que clase se esta llendo
    //validate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){ //para comparar si aun estan en el rango
        hour = h;
        minute = m;
        second = s;
    }
    else {
        throw invalid_argument(
            "hour, minute and/or second was out of range");  //por si esta fuera del rango 
    }
}

//return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const{ //el formato de forma Universal 
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
    return output.str(); //returns the formatted string
}

//return Time as string in standard-time format (HH:MMSS AN or PM)
string Time::toStandardString() const{
    ostringstream output;
    output << ((hour == 0  || hour == 12) ? 12 : hour %12) << ":" //Si hour no es 0 ni 12, entonces tendremos el reciduo de hour % 12
        << setfill('0') << setw(2) << minute << ":" << setw(2) 
        << second << (hour < 12 ? "AM" : "PM"); //Si hour es menor que 12 entonces sera AM, si es mayor sera PM
    return output.str(); // returns the formatted string
}