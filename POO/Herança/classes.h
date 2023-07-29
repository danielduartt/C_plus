#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>

//Herança = Uma classe herda prop de outras
class Veiculo{ //Veiculo é genérico para todos os veiculos = PAI
	public:
		int velocidade;
		int blind;
		int rodas;
		void setTipo(int tip);
		void setvelMax(int vm);
		void setArma(bool arm); 
		void imp();
	private:
		int tipo;//1=moto, 2=carro , 3=caminhao, 4=tanque
		int velMax;
		bool arma; 
};
//class + name + :public + father
//Métodos 
void Veiculo::imp(){
	std::cout<< "Tipo: "<< tipo << std::endl;
	std::cout<< "Vel. Max: : "<< velMax << std::endl;
	std::cout<< "Arma: "<< arma << std::endl;
	std::cout<< "Rodas: "<< rodas << std::endl;
	std::cout<< "Blindagem: "<< blind << std::endl;
}




//Métodos (set)
void Veiculo::setTipo(int tip){
	tipo = tip;
}
void Veiculo::setvelMax(int vm){
	velMax = vm;
}
void Veiculo::setArma(bool arm){
	arma = arm; 
}




class Moto:public Veiculo{
	//automaticamente moto ja tem todas as prop de Veiculo
	public:
		Moto(); 
};

//Métoo Construtor
Moto::Moto(){
	velocidade = 0; 
	blind = 0; 
	rodas = 2;
	setTipo(1);
	setvelMax(120);
	setArma(false); 
	//tipo = 1; -> privada, logo só pode ser alterada dentro da classe veiculo  	
}

class Carro:public Veiculo{
	public:
		Carro();

};


Carro::Carro(){
	velocidade = 0; 
	blind = 0; 
	rodas = 4;
	setTipo(2);
	setvelMax(180);
	setArma(false);
}




#endif
