#include <iostream>

class Casa{
    private:
        int numQuartos;
    public:
        void setNumQuartos(int number);
        int getNumQuartos();
        void temSuite(bool has);
};

int main(){

    Casa CasaNormal;
    CasaNormal.setNumQuartos(7);
    std::cout << "Casa Normal\n";
    std::cout << "\nQuantidade de quartos => " << CasaNormal.getNumQuartos() << std::endl;
    CasaNormal.temSuite(1);

    Casa *CasaPointer = new Casa();
    CasaPointer->setNumQuartos(8);
    std::cout << "\nQuantidade de quartos => " << CasaPointer->getNumQuartos() << std::endl;
    CasaPointer->temSuite(0);



    

    return 0;
}

void Casa::setNumQuartos(int number){
    if((number > 0 && number <=10))
        numQuartos = number;
    else{
        std::cout << "\nInvalid number!\n";
    }
}

int Casa::getNumQuartos(){
    return numQuartos;
}

void Casa::temSuite(bool has){
    if(has){
        std::cout << "\nYes!! "<< "\n";
    }
    else{
        std::cout << "\nNo!! "<< "\n";
    }
}