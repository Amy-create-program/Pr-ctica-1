#include <iostream>
using namespace std; 

bool esPalindromo(int num) {
    int original = num; 
    int inverso = 0; 
    while (num > 0){
        inverso = inverso * 10 + num % 10;
        num = num / 10; 
    }
    return original == inverso; 
}
int main() {
    int maxPalindromo = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo){
                maxPalindromo = producto;
            }
        }
    }
    cout << maxPalindromo << endl;
    return 0;
}