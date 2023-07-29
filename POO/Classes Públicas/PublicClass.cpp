#include <iostream>
#include <stdio.h> 
#include <locale.h>
using namespace std; 


class Aluno{
  public : 
    string nome = "Maria Eduarda" ;
    int idade = 29; 
    string sexo = "Feminino"; 
    string estado; 
    void VerificarEstado(string    estadoDoAluno);//Método
}; 

 void Aluno::VerificarEstado(string EstadoAluno){ //Prototipar o Método, ele é void da classe Aluno.... void Aluno::xxxxx

  if(EstadoAluno == "SP"){
    this->estado = "São Paulo"; //uso o this para indicar que a alteração é na classe Aluno
  }else if (EstadoAluno == "MA"){
    this->estado = "Maranhão";
  }else if(EstadoAluno == "RJ"){
    this->estado = "Rio de Janeiro";
  }
}
int main() {
	setlocale(LC_ALL, ""); 

  Aluno *aluno1 = new Aluno(); 
  // aluno1->nome = "Jordam"; 
  aluno1->VerificarEstado("SP");
  cout << "Estado: " << aluno1->estado << endl; //em C= aluno1.estado 
  cout << aluno1->nome << endl; 
  
  system("pause");
  return 0; 
}
