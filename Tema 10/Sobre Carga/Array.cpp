#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
usign namespace std;

Array::Array(int arraySize)
    : size{(arraySize > 0 ? static_cast<size_t(array Size) :
            throw invalid_argument {"Array size must be greater than 0"})},
      ptr{new int[size]{}} {/* empty body */}

    