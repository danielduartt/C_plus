#include <iostream> 
#include <locale.h> 
using namespace std; 

#define nome  cout << "Meu nome � Daniel" << endl; 
#define pi 3.14159

int main(){ //fun�ao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	nome
	cout << "Valor do pi �: " << pi << endl;
		
		
		
		
		
	system("pause");
	return 0; 
}
