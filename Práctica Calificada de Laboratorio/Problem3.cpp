#include <iostream>
using namespace std; 

bool esPrimo(int num) { //Variables booleanas solo pueden contener verdadero y falso.
    if (num <= 1){
        return false;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    cout << "Los números primos menos a " << n << " son: ";
    for (int i = 2; i < n; i++) {
        if (esPrimo(i)) {
            cout << i;
            if (i < n - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    return 0;
}