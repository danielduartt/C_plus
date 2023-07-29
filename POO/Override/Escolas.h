#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED
#include <iostream>
using namespace std; 


class AlunoEscolaPai{
	
	public: 
		int codigo;
		string nome;
		string sexo; 
		int idade;
		void exibirNatela();
		
	private: 
		
	
};

void AlunoEscolaPai::exibirNatela(){
	cout << "Código: " << codigo << endl; 
	cout << "Nome: " << nome << endl; 
	cout << "Sexo: " << sexo << endl; 
	cout << "Idade: " << idade << endl; 
}
//-------------------------------------------------------------------------
class AlunoEscolaFilho:public AlunoEscolaPai{
	
	public:
		AlunoEscolaFilho(); 
		
};

AlunoEscolaFilho::AlunoEscolaFilho(){
	codigo = 1;
	nome = "Daniel";
	sexo = "Masculino"; 
	idade = 20; 

}

//------------------------------------------------

class AlunoEscolaNeto: public AlunoEscolaFilho{
	public:
		string escola;
		string periodo; 
		AlunoEscolaNeto(string escolaNeto, string periodo): escola(escolaNeto), periodo(periodo){	
			codigo = 2;
			nome = "Neto";
			sexo = "Masculino"; 
			idade = 15; 
		}
		
};

//Criar um método que consiga alterar os valores na classe Pai 





















#endif
