#include "point.h"
#include <iostream>
using namespace std;

int main() {
    // Crear objetos Point
    Point p1(2, 3);
    Point p2(5, 6);
    Point p3(2, 3);
    
    // Comparar puntos
    if (p1 == p2) {
        cout << "p1 y p2 son iguales." << endl;
    } else {
        cout << "p1 y p2 son diferentes." << endl;
    }
    
    if (p1 == p3) {
        cout << "p1 y p3 son iguales." << endl;
    } else {
        cout << "p1 y p3 son diferentes." << endl;
    }

    // Crear un arreglo de puntos usando PointArray
    PointArray arr(3);
    arr[0] = p1;
    arr[1] = p2;
    arr[2] = p3;

    // Imprimir puntos en el arreglo
    cout << "Puntos en el arreglo:" << endl;
    for (size_t i = 0; i < arr.getSize(); ++i) {
        cout << "Punto " << i + 1 << ": (" 
             << arr[i].getX() << ", " << arr[i].getY() << ")" << endl;
    }

    // Crear una copia del arreglo
    PointArray arr2 = arr;

    // Comparar los arreglos
    if (arr == arr2) {
        cout << "arr y arr2 son iguales." << endl;
    } else {
        cout << "arr y arr2 son diferentes." << endl;
    }

    // Modificar un punto en el arreglo
    arr[1].setX(8);
    arr[1].setY(9);

    cout << "Después de modificar arr[1]:" << endl;
    cout << "Punto 2 en arr: (" 
         << arr[1].getX() << ", " << arr[1].getY() << ")" << endl;

    // Comparar nuevamente
    if (arr != arr2) {
        cout << "arr y arr2 son diferentes ahora." << endl;
    }

    return 0;
}
