#include <iostream>
using namespace std;

bool esprimo(int num) {
    if (num < 2) 
    {
    return false;
    }
    if (num == 2) 
    {
    return true;
    }
    if (num % 2 == 0){
    return false;
    }
    for (int i = 3; i*i <= num; i += 2) 
    {
        if (num % i == 0) {
        return false;
        }
    }
    return true;
}

int main()
{
    int count = 0;
    int num = 2;
    while (count < 10001) 
    {
        if (esprimo(num)) 
        {
            count++;
        }
        num++;
    }
    cout<< num-1 <<endl;
    return 0;
}