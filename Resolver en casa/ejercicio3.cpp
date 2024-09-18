#include <iostream>

using namespace std;


int MaxFacPrim(long long n) {
    int x = 2;
    while (n > 1){
        if (n % x == 0)
            n = n / x;
        else
            ++x;
    }
    return x;
}
    
int main () {
    cout <<  MaxFacPrim(600851475143) << endl;
    return 0;
}