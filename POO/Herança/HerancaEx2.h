#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED
#include <iostream>


//PAI
class AlunoEscolaA{
	public://Podemos acessar os dados de qualquer obj 
		AlunoEscolaA(); 
		void imp(); 
		int codigo; 
		std::string nome; 
		
		std::string getcpf();
		std::string getsexo();
		void setcpf();
		void setsexo(); 
	
	private://so pode acessar os dados dentro da propria classe
	//usando o set e o get 
		std::string cpf;
		std::string sexo; 
	
	protected://podemos acessar os dados de classes Herdadas
		int idade; 
		std::string escola;
		std::string turma; 
};

//get
string AlunoEscolaA::getcpf(){
	return cpf; 
}
string AlunoEscolaA::getsexo(){
	return sexo;
}
//set
void AlunoEscolaA::setcpf(string id){
	cpf = id; 
}
void AlunoEscolaA::setsexo(string esc){
	sexo = esc; 
}

void AlunoEscolaA::imp(){
	std:cout << "Código: " << codigo << std:endl;//public
	std:cout << "Nome: " << nome << std:endl;//public
	std:cout << "CPF: " << getcpf() << std:endl;//private
	std:cout << "Sexo: " << getsexo() << std:endl;//private
	std:cout << "Idade: " << idade << std:endl;//protected
	std:cout << "Escola: " << escola << std:endl;//protected
	std:cout << "Turma: " << turma << std:endl;//protected
	
}

//-------------------------------------------------------------------------------

//FILHO
class AlunoEscolaB:public AlunoEscolaA{
	public: 
		AlunoEscolaB();
			
};

AlunoEscolaB::AlunoEscolaB(){
			codigo = 1; 
			nome = "Maria Silva"; //Public
			setcpf( "12345678930"); //Private
			setsexo("Feminino"); 
			idade = 29;
			escola = "Escola ABC"
			turma = "8a série";
			cout << "-------ESCOLA B--------" << "\n"; 
}






















#endif 
