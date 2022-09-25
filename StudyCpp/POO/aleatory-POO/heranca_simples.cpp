#include<iostream>

class General{
    public:
    void SetValores(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    void MostrarResultado(){
        std::cout << "Soma " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    }
    private:
        int num1,num2;
};

class Children : public General{};

int main(){
    int num1=10, num2=50;
    Children classeFilha;
    classeFilha.SetValores(num1,num2);
    classeFilha.MostrarResultado();
    return 0;
}