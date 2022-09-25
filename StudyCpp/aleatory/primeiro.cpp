#include<iostream>
#include<string>
#define CHICRUTE 10


int main(){
    std::cout << "Prinmeiro C" << std::endl;
    std::cout<<CHICRUTE<<

    printf("blah\n");
    float seila{12.45};
    int num1, num2;
    char chr ='V';
    std::string TEXTO{"xicrutte azedo!\n"};
    std::cout <<"Primeiro Num" << std::endl;
    std::cin >>num1>>num2;
    std::cout<<num1<<num2<<"\n"<<seila << std::endl;
    std::cout<<TEXTO;
    std::printf("%s",TEXTO.c_str());
    std::printf("CHAR = %c // ASCII = %d ",chr,chr);

    int n1=10,n2=10;
    n1=n2++;
    printf("NUM 1 = %d, NUM 2 = %d",n1,n2);
    n2=++n2;
    printf("NUM 1 = %d, NUM 2 = %d",n1,n2);

    return 0;
}