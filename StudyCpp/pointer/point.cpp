#include <iostream>

int main(){

    int num = 123;
    int *ptr = &num;
    std::cout <<"\nValor contido no Numero: "<< *ptr << " Endereco: "<< &num <<std::endl;
    std::cout <<"\nValor contido no ponteiro: "<< *ptr <<" Endereco apontado: "<< ptr <<" Endereco: "<< &ptr <<std::endl;
    *ptr = 1456;
    std::cout <<"\nValor contido no ponteiro: "<< *ptr <<" Endereco apontado: "<< ptr <<" Endereco: "<< &ptr <<std::endl;
    int *outroPtr = ptr;
    *outroPtr = *ptr + 200;
    std::cout <<"\nValor contido no outro ponteiro: "<< *outroPtr <<" Endereco apontado: "<< outroPtr <<" Endereco: "<< &outroPtr <<std::endl;


    
    return 0;
}