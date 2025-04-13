#include <iostream>
#include "Array.h"
using namespace std;

int main() {
    // Crear dos arreglos de diferentes tamaños
    Array array1(5); // Arreglo con 5 elementos
    Array array2(5); // Arreglo con 5 elementos

    // Inicializar los elementos del primer arreglo
    cout << "Ingrese 5 elementos para el primer arreglo: ";
    cin >> array1;

    // Asignar el primer arreglo al segundo
    array2 = array1;

    // Comparar los arreglos
    if (array1 == array2) {
        cout << "Los arreglos son iguales." << endl;
    } else {
        cout << "Los arreglos son diferentes." << endl;
    }

    // Modificar un elemento del segundo arreglo
    cout << "Modificando el tercer elemento del segundo arreglo." << endl;
    array2[2] = 100;

    // Imprimir ambos arreglos
    cout << "Arreglo 1: " << array1 << endl;
    cout << "Arreglo 2: " << array2 << endl;

    // Verificar desigualdad
    if (array1 != array2) {
        cout << "Los arreglos ahora son diferentes." << endl;
    }

    return 0;
}
