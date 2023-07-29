#include <iostream>
#include <locale.h>
using namespace std; 



int main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	string name; 
	int yearsOld; 
	
	cout << "Digite o seu nome: " ; 
	//cin  >> name; //erro com o espaço 
	getline(cin, name); //correção
	
	cout << "Digite a sua idade: " ;
	cin  >> yearsOld;
	
	cout <<"-----------------------------\n"; 
	cout << "Nome: " << name << "\n" ; 
	cout << "Idade: " << yearsOld << "\n"; 
	
	system("pause");
	return 0;
}
