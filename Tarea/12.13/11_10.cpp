#include <iostream>
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

protected:
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
        return balance * (interestRate / 100);  // Interés como porcentaje del saldo
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
            balance -= transactionFee;  // Restar la tarifa de transacción
        }
    }

    // Redefinir función debit para incluir la tarifa de transacción
    bool debit(double amount) {
        bool success = Account::debit(amount);  // Llamar a la función base para realizar el retiro
        if (success) {
            balance -= transactionFee;  // Restar la tarifa de transacción
        }
        return success;
    }

private:
    double transactionFee;  // Tarifa por cada transacción
};

// Función principal para probar las clases
int main() {
    // Crear cuentas
    SavingsAccount savings(1000.0, 5.0);  // Saldo inicial 1000, tasa de interés 5%
    CheckingAccount checking(500.0, 2.0);  // Saldo inicial 500, tarifa de transacción 2.0

    // Mostrar saldo inicial
    cout << fixed << setprecision(2);  // Para mostrar dos decimales
    cout << "Initial Savings Account Balance: $" << savings.getBalance() << endl;
    cout << "Initial Checking Account Balance: $" << checking.getBalance() << endl;

    // Realizar operaciones en SavingsAccount
    savings.addInterest();  // Agregar interés
    cout << "Savings Account Balance after adding interest: $" << savings.getBalance() << endl;

    // Realizar operaciones en CheckingAccount
    checking.credit(200);  // Acreditar 200
    cout << "Checking Account Balance after crediting $200: $" << checking.getBalance() << endl;

    checking.debit(100);  // Debitar 100
    cout << "Checking Account Balance after debiting $100: $" << checking.getBalance() << endl;

    checking.debit(1000);  // Intentar debitar más de lo que hay en la cuenta
    cout << "Checking Account Balance after failed debit: $" << checking.getBalance() << endl;

    // Terminar el programa
    return 0;
}
