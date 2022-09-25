#include<iostream>
#include<string>
#include "../Headers/Pessoa.h"
    
Pessoa::Pessoa(int matricula, std::string nome, int cpf){
    this->matricula = matricula;
    this->nome = nome;
    this->cpf = cpf;
    std::cout << "\nConstructor...\n";
}
void Pessoa::setMatricula(int matricula){
    this->matricula = matricula;
}
void Pessoa::setNome(std::string nome){
    this->nome = nome;
}
void Pessoa::setCPF(int cpf){
    this->cpf = cpf;
}
int Pessoa::getMatricula(){
    return this->matricula;
}
std::string Pessoa::getNome(){
    return this->nome;
}
int Pessoa::getCPF(){
    return this->cpf;
}
void Pessoa::getDados(){
    std::cout << "\nMatricula: " << getMatricula() <<std::endl;
    std::cout << "\nNome: " << getNome() <<std::endl;
    std::cout << "\nCPF: " << getCPF() <<std::endl;
}
