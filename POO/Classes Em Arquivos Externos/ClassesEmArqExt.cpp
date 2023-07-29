#include <iostream>
#include <locale.h>
#include <stdio.h>
#include "Aluno.h"
using namespace std; 


int main(){
	setlocale(LC_ALL, ""); 
	Aluno *aluno1 = new Aluno(1); 
	cout << "Nome: " << aluno1->nome << endl; 
	cout << "Sexo: " << aluno1->sexo << endl; 
	cout << "Idade: " << aluno1->idade << endl; 
	Aluno *aluno2 = new Aluno(2); 
	aluno2 -> printarAluno(); 

	
	
	
	
	system("pause"); 
	return 0; 
}
