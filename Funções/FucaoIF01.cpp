#include <iostream>
#include <locale.h>
using namespace std; 


int main(){
	setlocale(LC_ALL, "");
	// If = se 
	// if(codi��o) se for true, executa 
	int num1, num2; 
	string fruta;
	num1 = 20; 
	num2 = 20; 
	
	if(num1 > 5){
		cout << "------------------Resultado---------------\n" ; 
		cout << "O n�mero 1 � MAIOR que 5" << endl; 		
	}else{
		cout << "------------------Resultado---------------\n" ; 
		cout << "O n�mero 1 � MENOR que 5" << endl; 
	
	}
	
	system("pause"); 
	return 0;
}
