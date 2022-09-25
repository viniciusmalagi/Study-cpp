#include <stdio.h>
#include<iostream>
#include "Matematica.h"

int main(){
    float num1,num2;
    std::cout <<"\nDigite o primeiro numero:\n";
    std::cin >> num1;
    std::cout <<"\nDigite o segundo numero:\n";
    std::cin >> num2;
    printf("\nResultados!\n");
    std::cout <<"\nSoma =>" << soma(num1,num2);
    std::cout <<"\nSubtracao =>" << subtracao(num1,num2);
    std::cout <<"\nDivisao =>" << divisao(num1,num2);
    std::cout <<"\nMultiplicacao =>" << multiplicacao(num1,num2);
    std::cout <<"\nPotencia =>" << potencia(num1,num2);
    std::cout <<"\nRiz N1=>" << raiz(num1);
    std::cout <<"\nRiz N2=>" << raiz(num2);

    return 0;
}