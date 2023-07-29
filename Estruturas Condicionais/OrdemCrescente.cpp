#include <iostream>
#include <locale.h>
using namespace std; 



int main(){
	setlocale(LC_ALL, "");
	int n1,n2,n3;
	int maior = 0, menor = 0, meio = 0; 
	cout << "Digite o número 1: "; 
	cin >> n1; 
	cout << "Digite o número 2: "; 
	cin >> n2; 
	cout << "Digite o número 3: "; 
	cin >> n3; 
	
	if(n1 > n2 && n1 > n3 && n1 != maior){
		maior = n1;
	}else if( n2 > n1 && n2 > n3){
		maior = n2;
	}else {
		maior = n3; 
	}
	
	if(n1 < n2 && n1 < n3){
		menor = n1;
	}else if( n2 < n1 && n2 <n3 && n2 != maior ){
		menor = n2; 
	}else {
		menor = n3; 
	}
	
	if(n1 != maior && n1 != menor){
		meio = n1;
	}else if(n2 != maior && n2 != menor){
		meio = n2;
	}else{
		meio = n3; 
	}
	
	cout << "------------------------Ordem Decrescente----------------------------" << endl; 
	cout << maior << "\t" << meio << "\t" << menor << "\n"; 
	

	
	system("pause"); 
	return 0; 
}
