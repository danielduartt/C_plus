#include <iostream> 
#include <locale.h> //para usar acentos
using namespace std; 

//para poder usar o cout endl(quebra linha)




/*
Iostrem � uma biblioteca
I - vem de input- entrada
O - Vem de Output saida 
*/

int main(){ //fun�ao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	cout << "Ol� ,Mundo!\n";
	cout << "Testando....\n.... " << endl;
	cout << "deu certo " ; 	
	return 0; 
}
