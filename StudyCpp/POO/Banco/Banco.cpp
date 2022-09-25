#include<iostream>
#include<string>
#include "Conta.h"

int main(){

    Conta Conta01("Banco Inter",122,202220,"Jose Farias",17000);
    Conta01.getSaldo();


    Conta Conta02;
    Conta02.depositar(1500.0);
    Conta02.getSaldo();;

    Conta02.transferir(Conta01,100.0);
    std::cout<<"Saldo Conta01 "<<Conta01.getSaldo()<<std::endl;
    std::cout<<"Saldo Conta02 "<<Conta02.getSaldo()<<std::endl;
    std::cout<<"Saldo Conta02 "<<Conta02.getTitular()<<std::endl;
    return 0;
}