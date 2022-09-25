#include <iostream>
#include <array>

void forInVetor(int array[],int lenght);

void duplicaVetor(int *array,int lenght);

int *inverteVetor(int *array,int lenght);

void mostraVetor(int *array, int lenght);

int main(){
    int vetorzao[] = {1,2,3,4,5,6,7,8,9,10};
    int lenVet = sizeof(vetorzao)/sizeof(int);
    // int lenVet2 = std::size_t(vetorzao);
    std::cout << lenVet <<std::endl;
    // std::cout << lenVet2 <<std::endl;
    mostraVetor(vetorzao,lenVet);
    duplicaVetor(vetorzao,lenVet);
    mostraVetor(vetorzao,lenVet);
    mostraVetor(inverteVetor(vetorzao,lenVet),lenVet);
    // forInVetor(vetorzao,lenVet2);
    return 0;    
}

void forInVetor(int array[],int lenght){
    for(int i=0;i<lenght;i++){
        std::cout<<"-"<<array[i] <<"-";
    }
}

void duplicaVetor(int *array,int lenght){
    for(int i=0;i<lenght;i++){
        array[i] = 2 * array[i];
    }
}
int *inverteVetor(int *array,int lenght){
    int j = 0;
    static int vetorInvertido[10];
    for(int i = lenght-1; i >=0; i--){
        vetorInvertido[j] = array[i];
        j++;
    }
    return &vetorInvertido[0];
}

void mostraVetor(int *array, int lenght){
    for(int i=0; i<lenght;i++){
        std::cout << " - " << array[i] << " - ";
    }
    std::cout <<"\n";
}