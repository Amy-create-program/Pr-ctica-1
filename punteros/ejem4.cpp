#include <iostream>

using namespace std;

/**
 * Implemente una función que reciba un arreglo de enteros y su
 * tamaño y duplique todos los elementos del areglo 
 */

void duplicateElems(int *arr, int tam){
    for(int i = 0; i < tam; i++){
        *(arr+i) *= 2;
    }
}

void printArray(const int *arr, const int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << *arr << " ";
    }
    cout << "]" << endl;
}
/**
 * Implemente una función que recibe un arreglo ed enteros y su tamaño 
 * y retorne el arreglo invertido
 * 
 *  antes [1 2 3 4 5 6]
 *  despues [6 5 4 3 2 1]
 */

void invertirPtr(int *ini, int *fin) {
    cout << "[" << endl; 
    while( ini <= fin){
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
    cout <<  "]" << endl; 
}





int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14};

    int tam = sizeof(array) / sizeof(array[0]);

    duplicateElems(array, tam);
    printArray(array, tam); 
    invertirPtr(array,array+tam-1) ;


    return 0;
}