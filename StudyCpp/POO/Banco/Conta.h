#pragma once
#include<iostream>
#include <string>

class Conta{
    private:
        std::string banco;
        int agencia;
        int conta;
        std::string titular;
        double saldo;
    public:
        //Contructors
        Conta();
        Conta(std::string banco, int agencia, int conta, std::string titular, double saldo);
        bool sacar(double valor);
        void depositar(double valor);
        void transferir(Conta &destino, double valor);
        double getSaldo();
        std::string getBanco();
        int getAgencia();
        int getConta();
        std::string getTitular();
        void setBanco(std::string banco);
        void setAgencia(int agencia);
        void setConta(int conta);
        void setTitular(std::string titular);
        ~Conta(); //destructor for stake/ delete(class) for Heap
};