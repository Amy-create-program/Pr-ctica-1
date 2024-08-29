#include <iostream>

int main() 
{
    char inputCharacter; 

    std::cout << "Ingrese un caracter: ";
    std::cin >> inputCharacter; 

    std::cout << "El equivalente entero de '" << inputCharacter << "' es: ";
    std::cout << static_cast<int>(inputCharacter) << std::endl;

    return 0;
}
