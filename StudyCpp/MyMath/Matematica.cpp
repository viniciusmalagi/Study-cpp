#include<iostream>
#include<cmath>
#include "Matematica.h"

int soma(int num1, int num2){
    return num1 + num2;
}
int subtracao(int num1, int num2){
    return num1 - num2;
}
float divisao(int num1, int num2){
    //cast
    return (float)num1 / (float)num2;
}
int multiplicacao(int num1, int num2){
    return num1 * num2;
}
int potencia(int num1, int num2){
    return pow(num1, num2);
}
float raiz(int num1){
    return sqrt(num1);
}