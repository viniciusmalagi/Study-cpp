#include <iostream>

int main(){

    int vetorzao[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = vetorzao;
    int length = sizeof(vetorzao) / sizeof(int);
    for(int i = 0; i < length; i++){
        std::cout << *(ptr +i) <<" - ";
    }
    std::cout <<"\n";
    for(int i = 0; i < length; i++){
        std::cout << ptr[i] << " - ";
    }
    return 0;
}