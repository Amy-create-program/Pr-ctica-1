#include <iostream>
#include <vector>
#include <typeinfo>
#include <iomanip>
using namespace std;

// Clase base Account
class Account {
public:
    // Constructor que inicializa el saldo
    Account(double initialBalance) {
        if (initialBalance >= 0.0) {
            balance = initialBalance;
        } else {
            balance = 0.0;
            cout << "Error: Initial balance was invalid. Balance set to 0.0." << endl;
        }
    }

    // Función para acreditar dinero (añadir al saldo)
    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Función para debitar dinero (retirar del saldo)
    bool debit(double amount) {
        if (amount > balance) {
            cout << "Debit amount exceeded account balance." << endl;
            return false;  // No se realizó la transacción
        } else {
            balance -= amount;
            return true;  // Transacción exitosa
        }
    }

    // Función para obtener el saldo actual
    double getBalance() const {
        return balance;
    }

    virtual ~Account() {}  // Destructor virtual para asegurar el manejo adecuado de memoria

private:
    double balance;  // Balance de la cuenta
};

// Clase derivada SavingsAccount
class SavingsAccount : public Account {
public:
    // Constructor de SavingsAccount, recibe balance inicial y tasa de interés
    SavingsAccount(double initialBalance, double interestRate)
        : Account(initialBalance), interestRate(interestRate) {}

    // Función para calcular el interés
    double calculateInterest() const {
        return getBalance() * (interestRate / 100);  // Interés como porcentaje del saldo
    }

    // Función para agregar el interés a la cuenta
    void addInterest() {
        double interest = calculateInterest();
        credit(interest);  // Agregar el interés al saldo
    }

private:
    double interestRate;  // Tasa de interés del 0 al 100
};

// Clase derivada CheckingAccount
class CheckingAccount : public Account {
public:
    // Constructor de CheckingAccount, recibe balance inicial y tarifa por transacción
    CheckingAccount(double initialBalance, double fee)
        : Account(initialBalance), transactionFee(fee) {}

    // Redefinir función credit para incluir la tarifa de transacción
    void credit(double amount) {
        if (amount > 0) {
            Account::credit(amount);  // Llamar a la función base para actualizar el saldo
            Account::debit(transactionFee);  // Restar la tarifa de transacción
        }
    }

    // Redefinir función debit para incluir la tarifa de transacción
    bool debit(double amount) {
        bool success = Account::debit(amount);  // Llamar a la función base para realizar el retiro
        if (success) {
            Account::debit(transactionFee);  // Restar la tarifa de transacción
        }
        return success;
    }

private:
    double transactionFee;  // Tarifa por cada transacción
};

// Función para mostrar los detalles de la cuenta
void processAccount(Account* account) {
    // Solicitar al usuario el monto para retirar
    double withdrawAmount;
    cout << "Enter amount to withdraw: $";
    cin >> withdrawAmount;
    account->debit(withdrawAmount);  // Realizar el retiro

    // Solicitar al usuario el monto para depositar
    double depositAmount;
    cout << "Enter amount to deposit: $";
    cin >> depositAmount;
    account->credit(depositAmount);  // Realizar el depósito

    // Si es una SavingsAccount, calcular y agregar el interés
    if (typeid(*account) == typeid(SavingsAccount)) {
        SavingsAccount* savings = dynamic_cast<SavingsAccount*>(account);
        savings->addInterest();
    }

    // Imprimir el saldo actualizado
    cout << "Updated balance: $" << account->getBalance() << endl;
}

int main() {
    // Crear un vector de punteros a Account
    vector<Account*> accounts;

    // Crear instancias de SavingsAccount y CheckingAccount
    accounts.push_back(new SavingsAccount(1000.0, 5.0));  // Saldo 1000, tasa de interés 5%
    accounts.push_back(new CheckingAccount(500.0, 2.0));  // Saldo 500, tarifa por transacción 2.0

    // Procesar todas las cuentas
    for (Account* account : accounts) {
        processAccount(account);  // Llamar a la función para procesar cada cuenta
        cout << "-------------------------------------\n";
    }

    // Liberar memoria
    for (Account* account : accounts) {
        delete account;
    }

    return 0;
}
