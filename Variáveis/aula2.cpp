#include <iostream> 
#include <locale.h> //para usar acentos
using namespace std;//para poder usar o cout endl(quebra linha)

/*
Iostrem � uma biblioteca
I - vem de input- entrada
O - Vem de Output saida 
*/

int main(){ //fun�ao pincipal onde tudo rola 
    //Para usar os acentos 
	setlocale(LC_ALL,"");
	
	
	int numInteiros = 3;
	double numComCasasDecimais = 9.99; 
	char caractere = 'a'; //recebe uma letra 
	
	char letra = 'a';
	const char* letras = "abcde"; //char que aceita v�rias letras
	string texto = "texto completo"; //textos completos
	bool vddFalse = false; //booleanos
	
	cout << numInteiros << "\n" ; 
	cout << numComCasasDecimais << "\n" ; 
	cout << caractere << "\n" ; 
	cout << texto << "\n"; 
	cout << vddFalse << "\n" ;  
	cout << letras << "\n" ; 
	
	
	
	
	 	
	return 0; 
}
