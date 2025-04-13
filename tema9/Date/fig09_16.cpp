#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date date1{7, 4, 2005};
    Date date2; 

    cout << "date1 = " << date1.toString()
        << "\ndate2 = " << date2.toString() << "\n\n";

    date2 = date1;

    cout << "After default memberwise assignment, date2 = "
        << date2.toString() << endl;
}