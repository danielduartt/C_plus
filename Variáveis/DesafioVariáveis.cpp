#include <iostream> 
#include <locale.h> 
using namespace std; 



int main(){ //funçao pincipal onde tudo rola 
	setlocale(LC_ALL,"");
	cout << "Convertendo metros para cm" << endl;
	double metros, res;
	cout <<"Digite o valor em metros: ";
	cin >> metros; 
	res = metros * 100; 
	cout << "O resultado em Cm será: " << res << "\n"; 

	system("pause");
	return 0; 
}
