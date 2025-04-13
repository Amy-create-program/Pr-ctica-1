// Fig. 9.9: CreateAndDestroy.cpp
//CreateAndDestroy class member-function definitions.

#include <iostream>
#include "CreateAndDestroy.h" // include CreateAndDestroy class definition
using namespace std;

// constructor setd object's ID number and descriptive message
CreateAndDestroy::CreateAndDestroy(int ID, string messageString)
    : objectID{ID}, message{messageString} {
    cout << "Object " << objectID << " constructor runs " 
        << message << endl; 
}

// destructor
CreateAndDestroy::~CreateAndDestroy(){
    //output newline for certain object; helps readability
    cout << (objectID == 1 || objectID == 6 ? "\n" : ""); //Si es 1 que salte de linea, si es 6 que no se imprima nada

    cout << "Object " << objectID << " destructor runs " 
        << message << endl;
}