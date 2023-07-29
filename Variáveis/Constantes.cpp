#include <iostream> 
#include <locale.h> 
using namespace std; 

#define nome  cout << "Meu nome é Daniel" << endl; 
#define pi 3.14159

int main(){ //funçao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	nome
	cout << "Valor do pi é: " << pi << endl;
		
		
		
		
		
	system("pause");
	return 0; 
}
