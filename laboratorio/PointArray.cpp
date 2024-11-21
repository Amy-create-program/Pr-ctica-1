#include "point.h"
#include <iostream>

// Implementación de la clase Point
Point::Point() : x(0), y(0) {}
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
void Point::setX(int x) {
    this->x = x;
}
void Point::setY(int y) {
    this->y = y;
}
bool Point::operator==(const Point& right) const {
    return x == right.x && y == right.y;
}
bool Point::operator!=(const Point& right) const {
    return !(*this == right);
}

// Implementación de la clase PointArray
PointArray::PointArray() : points(nullptr), size(0) {} //No hay un arreglo de punteros asignado
PointArray::PointArray(size_t size) : size(size) {
    points = new Point[size];
}
PointArray::PointArray(const PointArray& right) : size(right.size) {
    points = new Point[size];
    for (size_t i = 0; i < size; ++i) {
        points[i] = right.points[i];
    }
}
PointArray::~PointArray() {
    delete[] points;
}
size_t PointArray::getSize() const {
    return size;
}
Point& PointArray::operator[](int subscript) {
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw out_of_range("Subscript out of range");
    }
    return points[subscript];
}
const Point& PointArray::operator[](int subscript) const {
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw out_of_range("Subscript out of range");
    }
    return points[subscript];
}
PointArray& PointArray::operator=(const PointArray& right) {
    if (this != &right) {
        delete[] points;
        size = right.size;
        points = new Point[size];
        for (size_t i = 0; i < size; ++i) {
            points[i] = right.points[i];
        }
    }
    return *this;
}
bool PointArray::operator==(const PointArray& right) const {
    if (size != right.size) return false;
    for (size_t i = 0; i < size; ++i) {
        if (oints[i] != right.points[i]) {
            return false;
        }
    }
    return true;
}
bool PointArray::operator!=(const PointArray& right) const {
    return !(*this == right);
}
