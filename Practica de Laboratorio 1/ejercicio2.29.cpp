#include <iostream>

int main() 
{
    std::cout << "Face length \tSurface area \tVolume" << std::endl;
    std::cout << "of cube (cm)\tof cube (cm^2)\tof cube(cm^3)" << std::endl;

    for (int faceLength = 0; faceLength <= 4; ++faceLength) 
    {
        double surfaceArea = 6 * faceLength * faceLength; 
        double volume = faceLength * faceLength * faceLength; 

        std::cout << faceLength << "\t\t" << surfaceArea << "\t\t" << volume << std::endl;
    }

    return 0;
}

