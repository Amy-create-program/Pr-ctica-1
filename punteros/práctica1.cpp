#include <iostream>

using namespace std;
//Invertir un array con un puntero
/** Para la proxima vez, más para el examen parcial, no olvidar
 * de que para  que un puntero, pueda invertir un arreglo o sumarlo o otra cosa
 * necesita tener un void para que se este llamando de este tipo de puntero, 
 * tipo de la variable y el nombre del puntero (Importante)
 */ 
void invertirPtr(int *ini, int *fin){ 
    cout << "[" << endl; 
    while(ini <= fin) {
        int tmp = *ini; 
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
    cout << "]" << endl; 
}