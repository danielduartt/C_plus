#include <iostream> 
#include <locale.h> 
using namespace std; 

// Variável Global 
double nota1, nota2;  //como define, porém podemos alterar os valores 

int main(){ //funçao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	double nota3, nota4,media;
	//variáveis locais, são acessadas dentro da fução
	//variável global podem ser acessadas em diferentes funções 
	nota1 = 5.5;
	cout << nota1 << "\n"; 
	nota2 = 5;
	nota3 = 5;
	nota4 = 5; 
	
	media = (nota1 + nota2 + nota3 + nota4)/ 4; 
	cout << "A média das nota será: " << media << "\n"; 
	
	
	
		
		
		
		
		
		
	system("pause");
	return 0; 
}
