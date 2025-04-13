#include <iostream>

using namespace std; 

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