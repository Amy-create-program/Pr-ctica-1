#include "Array.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Array::Array(int arraySize)
    : size{ (arraySize > 0 ? static_cast<size_t>(arraySize) :
        throw invalid_argument{"Array size must be greater than 0"}) },
      ptr{new int[size]{}} { }

Array::Array(const Array& arrayToCopy)
    : size{arrayToCopy.size}, ptr{new int[size]} {
    for (size_t i{0}; i < size; ++i) {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const {
    return size;
}

const Array& Array::operator=(const Array& right) {
    if (&right != this) {
        if (size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }
    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}

bool Array::operator!=(const Array& right) const {
    return !(*this == right);
}

int& Array::operator[](int subscript) {
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw invalid_argument{"Subscript out of range"};
    }
    return ptr[subscript];
}

int Array::operator[](int subscript) const {
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw invalid_argument{"Subscript out of range"};
    }
    return ptr[subscript];
}

ostream& operator<<(ostream& output, const Array& array) {
    for (size_t i{0}; i < array.size; ++i) {
        output << array.ptr[i] << ' ';
    }
    return output;
}

istream& operator>>(istream& input, Array& array) {
    for (size_t i{0}; i < array.size; ++i) {
        input >> array.ptr[i];
    }
    return input;
}
