#include <iostream>
#include <locale.h>
using namespace std; 


int main(){
	setlocale(LC_ALL, "");
	//usando o GoTo
//	string pais; 
	//com os 2 : dizemos que eh um Label
//	recomecar: 
//	cout << "Qual o pa�s vai ganhar a copa do mundo: "; 
//	getline(cin, pais); 
//	
//	if(pais == "Brasil"){
//		cout << "Muito Bem! o Brasil vai ser o campe�o!\n" ;  
//	}else if( pais == "brasil"){
//		cout << "Muito Bem! o Brasil vai ser o campe�o!\n" ;
//	}else if( pais == "BRASIL"){
//		cout << "Muito Bem! o Brasil vai ser o campe�o!\n" ;
//	}else{
//		cout << "\n" ; 
//		goto recomecar; //recom�a de onde tem o label 
//	}

// usado and e or: && e || 

//OPERADORES TERN�RIOS 
	string sexo, letra, mensagem;
	
	cout <<"Digite uma letra: "; 
	cin >> letra; 
	(letra == "a") ? mensagem = "Voc� digitou a letra a " : mensagem = "Voc� n�o digitou a letra a";
	
	cout << "\n--------------------------------------------\n"; 
	cout << "Letra digitada: " << letra << endl; 
	cout << "Resultado " << mensagem << "\n" ; 
	
	system("pause"); 
	return 0;
}
