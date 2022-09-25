#include<iostream>
#include<string>
#include "../Headers/Bibliotecario.h"

void Bibliotecario::setDepartmento(std::string departmento){
    this->departmento = departmento;
}
std::string Bibliotecario::getDepartmento(){
    return this->departmento;
}