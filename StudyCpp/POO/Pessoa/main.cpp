#include <iostream>
#include <string>
#include "Headers/Aluno.h"
#include "Headers/Professor.h"
#include "Headers/Bibliotecario.h"

int main(){

    Aluno aluno01(2022,"Vinicius",105433688,"Eng Software");
    Professor prof01(2015,"Joarez",105454054,"Professores");
    Bibliotecario b(2017,"John",887045045,"Biblioteca");

    aluno01.getDados();
    prof01.getDados();
    b.getDados();
    return 0;
}