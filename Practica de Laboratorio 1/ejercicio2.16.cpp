#include <iostream>

int main() 
{
    double num1, num2;
    std::cout << "Ingrese el primer número : ";
    std:: cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Suma: " << num1 + num2 << std::endl;
    std::cout << "Multiplicación: " << num1 * num2 << std::endl;
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

