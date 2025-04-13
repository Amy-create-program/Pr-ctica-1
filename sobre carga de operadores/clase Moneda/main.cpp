#include <iostream>
#include "SolPeruano.h"

using namespace std;
int main() {
    SolPeruano p1{4, 50};
    SolPeruano p2{1, 80};
    SolPeruano s = p1 + p2;
    s.print();

    if (p1 < p2) {
        cout << "p1 es menor" << endl;
    }
    else if (p1 > p2) {
        cout << "p1 es mayor" << endl;
    }
    else {
        cout << "p1 y p2 son iguales" << endl;
    }
    SolPeruano p3 = p2;
    p3.print();

    return 0; 
/*
    p3 = p2;
    p3.print()
*/
}