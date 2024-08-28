#include <iostream>

int main() 
{
    double num1, num2;
    std::cout << "Ingrese el primer nÃºmero : ";
    std:: cin >> num1;

    std::cout << "Ingrese el segundo nÃºmero: ";
    std::cin >> num2;

    std::cout << "Suma: " << num1 + num2 << std::endl;
    std::cout << "MultiplicaciÃ³n: " << num1 * num2 << std::endl;
    std::cout << "Resta: " << num1 - num2 << std::endl;

    if (num2 != 0)
    {
        std::cout << "Division: " << num1 / num2 << std::endl;
    } 
    else 
    {
        std::cout << "No puede ser dividio entre cero!" << std::endl;
    }

    return 0;

}

