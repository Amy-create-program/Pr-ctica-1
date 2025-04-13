#include <iostream>

using namespace std; 

class Integer {
public:
    int val;
    Integer(int v = 0) { 
        val = v;
    }
};

int main(){
    Integer i; //ok
    Integer j(3); //ok 
}