#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <stdexcept>
using namespace std;

// Clase Point
class Point {
private:
    int x, y; // Coordenadas del punto

public:
    Point();                  // Constructor por defecto
    Point(int x, int y);      // Constructor con parámetros

    // Métodos de acceso
    int getX() const;
    int getY() const;

    // Métodos de modificación
    void setX(int x);
    void setY(int y);

    // Sobrecarga de operadores
    bool operator==(const Point&) const;
    bool operator!=(const Point&) const;
};

// Clase PointArray
class PointArray {
private:
    Point* points; // Array dinámico de puntos
    size_t size;   // Tamaño del array

public:
    PointArray();                            // Constructor por defecto
    PointArray(size_t size);                 // Constructor con tamaño
    PointArray(const PointArray& right);     // Constructor copia
    ~PointArray();                           // Destructor

    size_t getSize() const;                  // Obtener el tamaño
    Point& operator[](int);                  // Acceso para escritura
    const Point& operator[](int) const;      // Acceso para lectura

    // Sobrecarga de operadores
    PointArray& operator=(const PointArray& right); // Operador de asignación
    bool operator==(const PointArray& right) const; // Comparación ==
    bool operator!=(const PointArray& right) const; // Comparación !=
};

#endif // POINT_H
