#include <iostream>
#include <stdio.h>
#include <locale.h>
#include "Escolas.h"

using namespace std;




int main(){
	AlunoEscolaFilho *filho = new AlunoEscolaFilho(); 
	filho->exibirNatela(); 
	
	
	AlunoEscolaNeto *neto = new AlunoEscolaNeto(); 
	neto-> escola = "Escola O Bom Pastor";
	neto-> periodo = "Matutino";
	neto->exibirNatela(); 

	
	
	
	
	
	
	
	
	
	
	system("pause"); 
	return 0; 
}
