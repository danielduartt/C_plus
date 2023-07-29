#include <iostream>
#include <locale.h> 
using namespace std; 


int main(){
	setlocale(LC_ALL, ""); 
	
	int num1,num2,soma; 
	cout <<"Digite o número 1: "; 
	cin >> num1; 
	
	cout <<"Digite o número 2: ";
	cin >> num2; 
	
	soma = num1 + num2; 
	
	cout << "---------------------------------\n" ;
	cout << "A soma de " << num1 << " e " <<num2 << " será: " << soma << "\n" ; 
	
	
	
	system("pause"); 
	return 0; 
}

