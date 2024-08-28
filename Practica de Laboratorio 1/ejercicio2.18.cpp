#include <iostream>

int main() 
{
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    if (num1 > num2)
    {
        std::cout << num1 << " es más grande." << std::endl;
    }
    else if (num1 < num2) 
    {
        std::cout << num2 << "es más grande." << std::endl;
    }
    else 
    {
        std::cout << "Estos números son iguales" << std::endl;
    }
    
    return 0;
}