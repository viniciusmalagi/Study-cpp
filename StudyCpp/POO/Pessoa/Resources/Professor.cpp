#include<iostream>
#include<string>
#include "../Headers/Professor.h"

void Professor::setDepartmento(std::string departmento){
    this->departmento = departmento;
}
std::string Professor::getDepartmento(){
    return this->departmento;
}