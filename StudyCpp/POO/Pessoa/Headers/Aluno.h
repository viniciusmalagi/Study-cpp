#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"

class Aluno : public Pessoa{
    private:
        int matricula;
        std::string nome;
        int cpf;
        std::string curso;
    public:
        Aluno(int matricula, std::string nome, int cpf, std::string curso) : Pessoa(matricula, nome, cpf){}
        ~Aluno(){}
        void setCurso(std::string curso);
        std::string getCurso();
};
