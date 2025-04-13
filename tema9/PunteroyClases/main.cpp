#include <iostream>
#include "Point.h"

using namespace std;

void printPointArr(Point array[], int tam){
    for(int i = 0; i < tam; i++){
        array[i].print();
    }
}

int main(){
    Point p; //instancia
    p.print(); //invocar al metodo .print

    Point *ptr = &p; //ptr tinee la dirección de memoria de p
    ptr -> print(); //para invocar una instancia -> print 

    ptr -> setX(5);
    ptr -> print();

    Point array[3];
    int tam = sizeof(array) / sizeof(array[0]);
    printPointArr(array,tam);
    
}

//arreglo de points, una funcion que me imprima todos los points
