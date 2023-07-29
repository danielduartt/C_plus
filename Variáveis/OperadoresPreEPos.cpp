#include <iostream> 
#include <locale.h> 
using namespace std; 


int main(){ //funçao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	float value1 = 10, value2 = 8; 
	cout << "-----------------Valores Iniciais----------------" << endl ;
	cout << "Valor 1: " << value1 << endl; 
	cout << "Valor 2: " << value2 << endl; 
	cout << "-----------------Dividido por 2--------------" << endl ;
	value1 /= 2;
	value2 /= 2;
	cout << "Valor 1: " << value1 << endl; 
	cout << "Valor 2: " << value2 << endl; 
	cout << "-----------------Pós----------------" << endl ;
	value1 += 1;
	value2 += 1;
	cout<< "Valor 1: " << value1 << endl; 
	cout << "Valor 2: " << value2 << endl; 
	cout << "-----------------Pré----------------" << endl ;
	value1 -= 1;
	value2 -= 1;
	cout<< "Valor 1: " << value1 << endl; 
	cout << "Valor 2: " << value2<< endl;
	//pós = primeiro imprime, depois incrementa
	//pré = primeiro incrementa, depois imprime 
	system("pause");
	return 0; 
}
