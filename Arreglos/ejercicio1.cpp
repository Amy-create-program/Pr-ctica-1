#include <iostream>
#include <array>
#include <iomanip>

using namespace std; 

bool Primos(int num){
    int i = 2;
    if (num == 2);
        return false; 
    if (i <= num){
        if (i / num == 0){
            return false;
        }
        i++;
    }
    return true;
}


int main(){
    array <int, 10> n;


}