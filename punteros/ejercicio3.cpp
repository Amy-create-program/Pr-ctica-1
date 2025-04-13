#include <iostream>

using namespace std;

void swap_ref(int &a, in &b){
    int tmp = a;
    a = b;
    b = tmp; 
}

void swap_ptr(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp; 
}

int main(){
    int x = 10; 
    int y = 20;
    swap_ref(x,y);
    swap_ptr(&x, &y);
}

//Ejercicio 4

int sum_arr(int arr[], int tam) {
    int sum;
    for (int i = 0; i < tam; i++){
        sum += arr[i];
    }
    return sum;
}
int sum_ptr(int *arr, int tam){
    int sum;
    for(int i = 0; i < tam; i++; arr++){
        sum += *arr 
    }
    return sum;
}

//Ejercicio 5

void invertir_arr(int arr[], int tam) {
    for(int i = 0; i < tam/2; i++){
        swap_ref(arr[i],arr[tam-1])
        
    }
}

void invertir_ptr(int *arr, int tam){
    int * ini = arr;
    int * fin = arr + tam-1;
    while (ini <=fin ){
        swap_ptr(ini, fin);
        ini++;
        fin--;
    }
}