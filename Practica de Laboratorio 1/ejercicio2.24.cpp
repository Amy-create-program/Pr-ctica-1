#include <iostream>

int main() 
{
    
    int num1, num2;
    std::cout << "Ingrese el primer número entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número entero: ";
    std::cin >> num2;

    if (num1 % 2 == 0) 
    {
        std::cout << num1 << " es par." << std::endl;
    } 
    else 
    {
        std::cout << num1 << " es impar." << std::endl;
    }

    if (num2 % 2 == 0) 
    {
        std::cout << num2 << " es par." << std::endl;
    } 
    else 
    {
        std::cout << num2 << " es impar." << std::endl;
    }

    int sum_num = num1 + num2;

    if (sum_num % 2 == 0) 
    {
        std::cout << "La suma de " << num1 << " y " << num2 << " es par." << std::endl;
    } 
    else 
    {
        std::cout << "La suma de " << num1 << " y " << num2 << " es impar." << std::endl;
    }

    return 0;
}
