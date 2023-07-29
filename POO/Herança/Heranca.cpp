#include <iostream>
#include <stdio.h>
#include <locale.h>
#include "classes.h"
using namespace std; 



int main(){
	setlocale(LC_ALL, ""); 
	
	Moto *v1 = new Moto(); 
	//cout << v1->rodas<< endl;
	v1->imp(); 
	Carro *v2 = new Carro(); 
	v2->imp(); 	

	system("pause");
	return 0; 
}
