#include <iostream>
using namespace std;

int maximoPrincipal(long long n){ //nùmeros demasiado grandes para ser representados por un int
    int x = 2;
    while (n > 1) {
        if (n % x == 0){
            n = n / x;
        }
        else{
            ++x;
        }
    }
    return x;
}
int main() {
    cout << maximoPrincipal(600851475143) << endl; 
    return 0;
}