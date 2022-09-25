#include <iostream>

struct Aluno{
    long int Matricula = 2022101590;
    std::string Nome = "Vinicius";
    std::string Curso = "Eng Software";
    int Semestre = 6;
    double Mensalidade = 770.0;
};

void MostraAluno(Aluno &Dado);
void MostraAluno(Aluno *Dado);
void AlterarAluno(Aluno &Dado);
void AlterarAluno(Aluno *Dado);

int main(){

    Aluno aluno01;
    Aluno *aluno02 = new Aluno();
    std::cout << "ANTES DAS MUDANCAS....\n";
    MostraAluno(&aluno01);
    MostraAluno(aluno02);
    std::cout << "APOS AS MUDANCAS....\n";
    AlterarAluno(&aluno01);
    AlterarAluno(aluno02);
    MostraAluno(&aluno01);
    MostraAluno(aluno02);
    return 0;
}

void MostraAluno(Aluno &Dado){
    std::cout<<"\n**************** DADOS DO ALUNO ******************\n";
    std::cout << "Matricula: " << Dado.Matricula << std::endl;
    std::cout << "Aluno: " << Dado.Nome << std::endl;
    std::cout << "Curso: " << Dado.Curso << std::endl;
    std::cout << "Semestre: " << Dado.Semestre << std::endl;
    std::cout << "Mensalidade: " << Dado.Mensalidade << std::endl;
    std::cout<<"\n**************************************************\n";
}

void MostraAluno(Aluno *Dado){
    std::cout<<"\n**************** DADOS DO ALUNO ******************\n";
    std::cout << "Matricula: " << Dado->Matricula << std::endl;
    std::cout << "Aluno: " << Dado->Nome << std::endl;
    std::cout << "Curso: " << Dado->Curso << std::endl;
    std::cout << "Semestre: " << Dado->Semestre << std::endl;
    std::cout << "Mensalidade: " << Dado->Mensalidade << std::endl;
    std::cout<<"\n**************************************************\n";
}

void AlterarAluno(Aluno &Aluno){
    Aluno.Matricula= 2022102555;
    Aluno.Nome = "Carlos";
    Aluno.Curso = "Eng Civil";
    Aluno.Semestre = 2;
    Aluno.Mensalidade = 1250;
}

void AlterarAluno(Aluno *Aluno){
    Aluno->Matricula= 202215077;
    Aluno->Nome = "Sthefany";
    Aluno->Curso = "Arquitetura";
    Aluno->Semestre = 7;
    Aluno->Mensalidade = 975;
}