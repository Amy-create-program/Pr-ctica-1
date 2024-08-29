#include <iostream>

int main() 
{
    int num1, num2, num3;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;

    if (num3 % num1 == 0) 
    {
        std::cout << num1 << " es un factor de " << num3 << "." << std::endl;
    } 
    else 
    {
        std::cout << num1 << " no es un factor de " << num3 << "." << std::endl;
    }
  
    if (num3 % num2 == 0) 
    {
        std::cout << num2 << " es un factor de " << num3 << "." << std::endl;
    } 
    else 
    {
        std::cout << num2 << " no es un factor de " << num3 << "." << std::endl;
    }

    return 0;
}
