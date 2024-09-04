#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount1{"Jane Green"};
    Account myAccount2{"Jhon Blue"};

    cout << "El nombre inicial de la cuenta: " << myAccount1.getName();
    cout << "El nombre inicial de la segunda cuenta: " << myAccount2.getName();

    cout << "\nPor favor, ingrese el nombre de la cuenta: ";
    string theName;
    getline(cin, theName);
    myAccount1.setName(theName);
    
    cout << "\nPor favor, ingrese el nombre de la segunda cuenta: ";
    string theName2;
    getline(cin, theName2);
    myAccount2.setName(theName2);

    cout << "El nombre en el objeto my Account es: " << myAccount1.getName() << endl;
    cout << "El nombre de la segunda cuenta es: " << myAccount2.getName() << endl;

    return 0;
}