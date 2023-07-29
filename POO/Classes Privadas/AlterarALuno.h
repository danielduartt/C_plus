#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <iostream>


class Aluno{
  public: 
    int codigo;
    std::string nome;
    int idade; 
    std::string sexo;
    Aluno(int cod); //Método
    void ImprimirDados(); 
};

//Construtor 
Aluno::Aluno(int cod){
  if(cod == 1){
    codigo = 1;
    nome = "Nicole"; 
    idade = 28; 
    sexo = "Feminino"; 
    
  }else if(cod == 2){
    codigo = 2;
    nome = "Allan"; 
    idade = 30;
    sexo = "Masculino"; 
  }
}

//Métodos
void Aluno::ImprimirDados(){
  std::cout<<"Nome: " << nome << std::endl; 
  std::cout<<"Sexo: " << sexo << std::endl;
  std::cout<<"Idade: " << idade << std::endl; 
  std::cout<<"Código: " << codigo << std::endl; 
}


#endif
