#include <iostream> 
#include <locale.h> 
using namespace std; 

// Vari�vel Global 
double nota1, nota2;  //como define, por�m podemos alterar os valores 

int main(){ //fun�ao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	double nota3, nota4,media;
	//vari�veis locais, s�o acessadas dentro da fu��o
	//vari�vel global podem ser acessadas em diferentes fun��es 
	nota1 = 5.5;
	cout << nota1 << "\n"; 
	nota2 = 5;
	nota3 = 5;
	nota4 = 5; 
	
	media = (nota1 + nota2 + nota3 + nota4)/ 4; 
	cout << "A m�dia das nota ser�: " << media << "\n"; 
	
	
	
		
		
		
		
		
		
	system("pause");
	return 0; 
}
