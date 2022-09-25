#include<iostream>
#include<string>
#include "Conta.h"

Conta::Conta(){
    this->banco = "Banco Default";
    this->agencia = 1377;
    this->conta = 2022021;
    this->titular = "Padrao Default";
    this->saldo = 12000;
}
Conta::Conta(std::string banco, int agencia, int conta, std::string titular, double saldo){
    this->banco = banco;
    this->agencia = agencia;
    this->conta = conta;
    this->titular = titular;
    this->saldo = saldo;
}

Conta::~Conta(){
    std::cout << "Descrutor: " << this << std::endl;
}

bool Conta::sacar(double valor){
    if(saldo < valor){
        std::cout << "\nNao foi possivel realizar a operacao.\n";
        return false;
    }
    else{
        saldo-=valor;
        std::cout <<"\nSaque efetuado! R$ "<< valor<<std::endl;
        return true;
    }
}

void Conta::depositar(double valor){
    saldo += valor;
    std::cout << "\nDeposito realizado! R$ "<<valor<<std::endl;
}

void Conta::transferir(Conta &destino, double valor){
     if(saldo < valor){
        std::cout << "\nNao foi possivel realizar a operacao.\n";
    }
    else{
        destino.depositar(valor);
        saldo-=valor;
        std::cout <<"\nSaque efetuado! R$ "<< valor<<std::endl;
        std::cout << "\n******DADOS DA TRANSFERENCIA*******\n";
        std::cout << "\nBanco: "<< destino.getBanco()<<std::endl;
        std::cout << "\nAgencia: "<< destino.getAgencia()<<std::endl;
        std::cout << "\nConta: "<< destino.getConta()<<std::endl;
        std::cout << "\nTitular: "<< destino.getTitular()<<std::endl;
        std::cout << "\nTranferencia efetuada!!\n";
    }
}

double Conta::getSaldo(){
    return saldo;
}

std::string Conta::getBanco(){
    return banco;
}

int Conta::getAgencia(){
    return agencia;
}

int Conta::getConta(){
    return conta;
}

std::string Conta::getTitular(){
    return titular;
}

void Conta::setBanco(std::string banco){
    this->banco = banco;
}

void Conta::setAgencia(int agencia){
    this->agencia = agencia;
}

void Conta::setConta(int conta){
    this->conta = conta;
}

void Conta::setTitular(std::string titular){
    this->titular = titular;
}