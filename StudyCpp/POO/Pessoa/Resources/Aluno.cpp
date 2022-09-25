#include<iostream>
#include<string>
#include "../Headers/Aluno.h"

void Aluno::setCurso(std::string curso){
    this->curso = curso;
}
std::string Aluno::getCurso(){
    return this->curso;
}