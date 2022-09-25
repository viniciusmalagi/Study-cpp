#include <iostream>
#include<iomanip>
#include <vector>
int main(){


    int numeros[] = {2000,2005,2010,2015,2020,2022};
    float velocidades[] = {70.9f,89.5f, 65.6f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f };
    int length = sizeof(velocidades) / sizeof(float);
    float total = 0;

    std::vector<int> aleatory = {1,2,3};
    aleatory.push_back(4);
    aleatory.push_back(5);

    std::cout <<"Aleatory\n";
    for(auto aleat : aleatory){
    std::cout << aleat <<std::endl;
    }

    for(auto Num : numeros){
        std::cout << Num <<std::endl;
    }

    for(auto Vel : velocidades){
        total += Vel;
    }

    std::cout <<"MEDIA DAS VELOCIDADES = " << std::fixed << std::setprecision(2)<< total / length << " Km/h" << std::endl;


    return 0;
}