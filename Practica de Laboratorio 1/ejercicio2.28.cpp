#include <iostream>

int main() 
{
    int num;
    std::cout << "Ingrese cuatro números enteros: ";
    std::cin >> num;

    int digit4 = num % 10; 
    int digit3 = (num / 10) % 10; 
    int digit2 = (num / 100) % 10; 
    int digit1 = num / 1000; 

    std::cout << digit4 << " " << digit3 << " " << digit2 << " " << digit1 << std::endl;

    return 0;
}
