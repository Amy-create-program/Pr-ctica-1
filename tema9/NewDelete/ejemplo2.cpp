#include <iostream>

using namespace std;

int* getPtrToFive(){
    int *ptr = new int; 
    *ptr = 5;
    returrn ptr;
}

inr main(){
    int *ptr = getPtrToFive();
    cout << *ptr << endl;
    delete ptr; 
}