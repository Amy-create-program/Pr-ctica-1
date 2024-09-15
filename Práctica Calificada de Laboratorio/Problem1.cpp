#include <iostream>
using namespace std;

int main() 
{
    int x = 0;
    int suma = 0;

    while (x < 1000000) 
    {

        if (x % 3 == 0 || x % 5 == 0)
        {
            suma = x + suma; 
        }
        x++;
    }
    
    cout << "La suma de los multiplos de 3 o 5 es: " << suma << endl;
    return 0;
    
}

