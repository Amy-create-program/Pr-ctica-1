#include <iostream>
using namespace std; 

int main()
{
    int x;

    cout << "Ingrese un número: ";
    cin >> x;
    
    for (int i = 1; i <= x; i++) 
    {
        if (i % 2 != 0)
        {
            cout << i;
            if (i < x && i != x) {
                cout << ", ";
            }
        }
    }

    cout << endl;

    return 0;
}