#include <iostream>
#include <array> 

using namespace std;

/**
 * Implemente una función que reciba un arreglo de enteros y su
 * tamaño y duplique todos los elementos del areglo 
 */

void duplicateElems(array <int, 9> &arr){
    for(int &i : arr) {
        i *= 2;
    
    }
}

void printArray(array <int, 9> arr) {
    cout << "[";
    for(int i : arr){
        cout << i << " ";
    }
    cout << "]" << endl;
}

int main(){
    array<int, 9> arr{1, 2, 3, 4, 5, 6, 7 ,8 ,9};
    duplicateElems(arr);
    printArray(arr);
    return 0;
}