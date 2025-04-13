#include <iostream> 

using namespace std;

int main(){
    int x = 10;
    int *ptr1 = &x;
    int *ptr2 = &x;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    if (ptr1 == ptr2) {
        cout << "ambos punteros apuntan a la misma variable" << endl; 
    }

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    return 0;
}