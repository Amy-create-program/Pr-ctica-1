#include <iostream>

using namespace std;

class Integer{
    public:
        int val;
        Integer(){
            val = 0; cout << "Integer default constructor" << endl;
        }
};
class IntegerWrapper {
public:
    Integer val;
    IntegerWrapper(){
        cout << "IntegerWrapper default constructor" << endl;
    }
}