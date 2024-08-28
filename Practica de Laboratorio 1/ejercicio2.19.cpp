#include <iostream>
using namespace std; 

int main()
{
    int num1, num2, num3;

    cout << "Ingrese tres diferentes números enteros: ";
    cin >> num1 >> num2 >> num3;

    int suma = num1 + num2 + num3;
    int division = suma / 3;
    int producto = num1 * num2 * num3;
    int pequeño = num1;
    int grande = num1;

    if (num2 < pequeño) 
    {
        pequeño = num2;
    }
    if (num3 < pequeño) 
    {
        pequeño = num3;
    }
    if (num2 > grande) 
    {
        grande = num2;
    }
    if (num3 > grande)
    {
        grande = num3;
    }

    cout << "La suma es " << suma << endl;
    cout << "La division es " << division << endl,
    cout << "La multiplicación es " << producto << endl;
    cout << "El número menor es " << pequeño << endl;
    cout << "El número mayor es " << grande << endl;

    return 0;
}