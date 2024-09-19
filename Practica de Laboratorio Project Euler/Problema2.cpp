#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main(){
    int sum = 0;
    int n = 0;

    while(fibonacci(n) < 4000000){
        if (fibonacci(n) % 2 == 0) {
            sum = sum + fibonacci(n);
        }
        n++;
    }
    cout << "La suma de los tèrmino pares hasta el minimo de 4000000: " << sum << endl; 
    return 0;
}