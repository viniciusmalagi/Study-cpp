#pragma once
#include <iostream>
#include <string>
#include "../Headers/Pessoa.h"
class Professor : public Pessoa{
    private:
        int matricula;
        std::string nome;
        int cpf;
        std::string departmento;
    public:
        Professor(int matricula, std::string nome, int cpf, std::string departmento) : Pessoa(matricula, nome, cpf){}
        ~Professor(){}
        void setDepartmento(std::string departmento);
        std::string getDepartmento();
};