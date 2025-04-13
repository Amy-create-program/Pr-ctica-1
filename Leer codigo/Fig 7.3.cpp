#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
    array<int, 5> n; // aca declara 5 elementos para n

    //inicializa los elementos desde un rango de n hasta 0
    for(size_t i{0}; i < n.size(); ++i) { //de la linea 9-11 usa eso para que inicializen los elementos array a zero
        n[i] = 0;
    }
    
    cout  << "Element" << setw(10) << "Value" << endl;

    // elementos array para que los evalue 
    for (size_t j{0}; j < n.size(); ++j){ // de la linea 16-18 imprime los array en una forma tabular como una tabla
        cout << setw(7) << j << setw(10) << n[j] << endl; 
    }
}