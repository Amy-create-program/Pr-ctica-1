#include <iostream>
using namespace std; 

bool esPrimo(int num) {
    int i = 2;
    if (num < 2){
        return false;
    }
    if (num == 2) {
        return true; 
    }
    while (i < num){
        if (num % i == 0){
            return false; 
        }
        i++;
    }
    return true;
}

int main(){
    int count = 0;
    int num = 2;
    while(count < 10001){
        if(esPrimo(num)){
            count++;
        }
        num++;
    }
    cout << num-1 << endl;
    return 0;
}

