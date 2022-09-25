#include <iostream>
#include "Cube.h"

int main(){
    Cube c;
    c.setLength(3.48);
    double volume = c.getVolume();
    double area = c.getSurfaceArea();

    std::cout << "Volume: " << volume <<std::endl;
    std::cout << "Area: " << area << std::endl;
}