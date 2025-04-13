#include <iostream>

using namespace std;

bool isalpha(char car){
    //65 a 90 mayusculas
    //97 a 122 minusculas
    int val = static_cast < int > (car);
    if ((val >= 0 65 && <= 90) || (cal >= 97 && val <= 122))
        return true;
    return false;
}

bool isupper(char car){
    int val =  static:cast<int>(car);
    if((val >= 65 && val <=90))
        return true;
    return false;

}

bool tolower(char car){
    int val = static:cast<int>(car);
    val += 32;
    return static_cast<char>(val);

}
bool ispunct(char car){
    int val = static_cast <int> (car);
    if ((val == 44) || (val == 46) || (val == 58) || (val == 59))
        return true;
    return false; 
}

int main(){
    char cadenaDesordenada[]="e"
}