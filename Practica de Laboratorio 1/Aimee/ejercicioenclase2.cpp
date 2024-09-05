#include <iostream>
#include "Account.h"

using namespace std;

int man()
{
    Account account1{"Jane Green", 50};
    Account account2{"Jhon Blue", -7}; // No puede ser -7 ya que el constructor dijo que mayores al número 0, entonces lo colocaria como un 0.

    cout << "account1: " << account1.getName() << " el balance es $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " el balance es $" << account2.getBalance();

    cout << "\n\n Ingrese el deposito para account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "añadiendo" << depositAmount << " para el balance de account1"; 
    account1. deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " el balance es $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " el balance es $" << account2.getBalance();

    cout << "\n\n Ingrese el deposito para account2: ";
    cin >> depositAmount;
    cout << "añadiendo" << depositAmount << " para el balance de account2";
    account2.deposit(depositAmount);

    cout << "\n\n Ingrese el dinero que va a retirar de account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "withdrawing..." << withdrawAmount << " from account1 balance."
    account1.withdraw(withdrawAmount);


    cout << "\n\naccount1: " << account1.getName() << " el balance es $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " el balance es $" << account2.getBalance() << endl;
}
