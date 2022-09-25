#pragma once
#include <iostream>
#include <string>
#include "../Headers/Pessoa.h"

class Bibliotecario : public Pessoa{
    private:
        int matricula;
        std::string nome;
        int cpf;
        std::string departmento;
    public:
        Bibliotecario(int matricula, std::string nome, int cpf, std::string departmento) : Pessoa(matricula, nome, cpf){}
        ~Bibliotecario(){}
        void setDepartmento(std::string departmento);
        std::string getDepartmento();
};