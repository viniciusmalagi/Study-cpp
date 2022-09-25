#include<iostream>

int Soma(int numero, int NumeroAserSomado){
    return numero + NumeroAserSomado;
}

void Mensagem(){
    std::cout << "\nXicrutte" << std::endl;
    return;
}

int main(){

    int a=Soma(1,10);
    printf("%d",a);
    printf("\n");
    printf("%d",Soma(25,25));
    printf("\n");
    printf("%d",Soma(Soma(250,250),Soma(250,250)));
    Mensagem();


    return 0;
}