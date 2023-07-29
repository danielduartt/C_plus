
#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

class Aluno{
	
	public: //posso acessar de qualquer outra classe os obj 
		int codigo; 
		std::string nome; 
		int idade; 
		std::string sexo; 
		
		void printarAluno();
		Aluno(int codigoAluno);//Prototipando = apresentando
	private: 
	
};
//Método para exibir Dados na tela 
void Aluno::printarAluno(){ 
	std::cout << "Nome: " << nome << "\n"; 
	std::cout << "Sexo: " << sexo << "\n"; 
	std::cout << "Idade: " << idade << "\n"; 	
}

//Métodos Construtores = Cria os Objetos do tipo do nome da Classe 
	Aluno::Aluno(int codigoAluno){
		
		if(codigoAluno == 1){
			codigo = 1;
			nome = "Ana Paula";
			sexo = "Feminino";
			idade = 30; 
		}else if(codigoAluno == 2){
			codigo = 2;
			nome = "Daniel";
			sexo = "Masculino";
			idade = 20; 
		}else if(codigoAluno == 3){
			codigo = 3;
			nome = "SLA";
			sexo = "SlA";
			idade = 1000; 
		}
				
	}

#endif


