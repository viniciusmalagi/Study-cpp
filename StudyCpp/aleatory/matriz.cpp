#include <iostream>

int main(){

    int matriz[5][5];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            if (i == j){
                matriz[i][j] = 0;
            }
            else if (i < j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = -1;
            }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout <<" "<< matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}