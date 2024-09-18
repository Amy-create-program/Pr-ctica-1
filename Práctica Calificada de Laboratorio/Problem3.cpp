#include <iostream>
using namespace std; 

bool esPrimo(int num) { //Variables booleanas solo pueden contener verdadero y falso.
    int i=2;
    if (num <= 1){
        return false;
    }
    while (i < num){
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true; 
}   
void imprimirPrimos(int n) {
    for (int i {2}; i < n; i++){
        if (esPrimo(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Ingrese un número: "; 
    cin >> n;

    imprimirPrimos(n);

    return 0;

}
