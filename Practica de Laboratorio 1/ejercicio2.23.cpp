#include <iostream>

int main() 
{
    
    int num1, num2, num3, num4, num5;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;
    std::cout << "Ingerese el cuarto número: ";
    std::cin >> num4;
    std::cout << "Ingrese el quinto número: ";
    std::cin >> num5;

    int mayor = num1;
    int menor = num1;

    
    if (num2 > mayor) 
    {
        largest = num2;
    }
    if (num2 < menor) 
    {
        smallest = num2;
    }

    if (num3 > mayor) 
    {
        largest = num3;
    }
    if (num3 < menor) 
    {
        smallest = num3;
    }

    if (num4 > largest) 
    {
        largest = num4;
    }
    if (num4 < menor) 
    {
        smallest = num4;
    }

    if (num5 > mayor) 
    {
        largest = num5;
    }
    if (num5 < menor) 
    {
        smallest = num5;
    }

    // Print the results
    std::cout << "El mayor número: " << mayor << std::endl;
    std::cout << "El menor número: " << menor << std::endl;

    return 0;
}
