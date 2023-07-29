#include <iostream>
#include <locale.h>
using namespace std; 


int main(){
	setlocale(LC_ALL, "");
	// If = se 
	// if(codição) se for true, executa 
	int num1, num2; 
	string fruta;
	num1 = 20; 
	num2 = 20; 
	
	if(num1 > 5){
		cout << "------------------Resultado---------------\n" ; 
		cout << "O número 1 é MAIOR que 5" << endl; 		
	}else{
		cout << "------------------Resultado---------------\n" ; 
		cout << "O número 1 é MENOR que 5" << endl; 
	
	}
	
	system("pause"); 
	return 0;
}
