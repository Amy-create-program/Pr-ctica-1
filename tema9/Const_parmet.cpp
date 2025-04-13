#include <iostream>
using namespace std;


class Integer{
public:
    int val;    
    Integer(int v) { 
        val = v; 
        cout << "constructor with arg " << v << endl; 
    }
};

int main(){
    Integer i(3);

    // Integer arr[3] no podra usarse ya que no es un constructor por defecto 
}