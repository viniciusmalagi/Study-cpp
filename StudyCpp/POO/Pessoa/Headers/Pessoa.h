#pragma once
#include <iostream>
#include<string>

class Pessoa{
    private:
        int matricula;
        std::string nome;
        int cpf;
    public:
        Pessoa(int matricula, std::string nome, int cpf);
        ~Pessoa(){}
        void setMatricula(int matricula);
        void setNome(std::string nome);
        void setCPF(int cpf);
        int getMatricula();
        std::string getNome();
        int getCPF();
        void getDados();
};  