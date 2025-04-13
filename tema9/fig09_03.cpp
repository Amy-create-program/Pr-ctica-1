//Fig 9.3: fig09_03.cpp
//Program to test class Time
//NOTE: This file must be compiled with Time.cpp
#include <iostream>
#include <stdexcept> //invalid_argument exception class 
#include "Time.h"   // definition of class Time from Time.h
using namespace std;

// displays a Time in 24-hour and 12-hour formats
void displayTime(const string& message, const Time& time){  //de tipo string  mensaje, y la constante de tipo Time
    cout << message << "\nUniversal time: " << time.toUniversalString()
        << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main(){
    Time t; // instantiate object t of class Time

    displayTime("Initial Time", t); // display t's initial value
    t.setTime(13, 27,  6); // change time
    // attempt to set the time with invalid values 
    try{ //Esto es para crear un error personalizado
        t.setTime(99, 99, 99); //errores que estan fuera del rango
    }
    catch (invalid_argument& e){ //viene de la sentencia throw, es una cadena de error personalizada
        cout << "Exception: " << e.what() << "\n\n";
    }

    // display t's value after attempting to set an invalid time
    displayTime("After attemping to set an invalid time:", t);
}