#ifndef Escola_H_INCLUDED
#define Escolar_H_INCLUDED
#include <iostream>
using namespace std; 

class Pai{
	
	public:
		void impPai(); 
		
	private:
		
		
		
	protected: 	
};


void Pai::impPai(){
	
	cout << "-------------Dados Casa Pai------------" << endl;
	cout << "C�digo 1: 1" << endl; 
	cout << "Propriet�rio: Matheus" << endl;
	cout << "Estado: SP " << endl;
	cout << "Cidades: Lages " << endl;
	cout << "Valor: R$ 500.000,00" << endl;
	
}

//----------------------------------------------------------------------------------
class Mae{
	
	public:
		void impMae(); 
		
	private:
		
		
		
	protected: 	
};


void Mae::impMae(){
	
	cout << "-------------Dados Casa Mae------------" << endl;
	cout << "C�digo 1: 2 " << endl; 
	cout << "Propriet�rio: Sarah" << endl;
	cout << "Estado: SP " << endl;
	cout << "Cidades: Campinas " << endl;
	cout << "Valor: R$ 1.000.000,00" << endl;
	
}

//--------------------------------------------------------------------------------
//Herda tudo do pai e tudo da m�e 
class Filho:public Pai, public Mae{
	
};








#endif
