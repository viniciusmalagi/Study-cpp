#include<iostream>

void trocarValores(int* num1, int* num2);

int main(){

    int num, num2;
    std::cout <<"\nDigite o valor para o Numero 1: ";
    std::cin >> num;
    std::cout <<"\nDigite o valor para o Numero 2: ";
    std::cin >> num2;
    std::cout <<"\nValor para o Numero 1: "<<num<< std::endl;
    std::cout <<"\nValor para o Numero 2: "<<num2<< std::endl;
    trocarValores(&num,&num2);
    std::cout <<"\nValor para o Numero 1: "<<num<< std::endl;
    std::cout <<"\nValor para o Numero 2: "<<num2<< std::endl;
    return 0;
}
void trocarValores(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}