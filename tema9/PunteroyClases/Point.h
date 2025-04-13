//puntero this: Puntero a la instancia actual de la clase
#ifndef __POINT_H__
#define __POINT_H__

using namespace std;

class Point {
    private: 
        int x;
        int y;
        int array[];
    public:
        Point(): x(0), y(0){
            cout << "Default constructor" << endl;
        };
        int getX() const{
            return x;
        };
        int getY() const{
            return y;
        };
        void setX(int x){
           this -> x = x;
        };
        void setY(int y){
            this -> y = y;
        };
        void print() const{
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

#endif