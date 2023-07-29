#include <iostream>
#include <stdio.h> 
#include <locale.h>
#include "classes.h"
using namespace std; 



//set = alterar uma prop privada
//get = acessar um valor no private
int main() {
  setlocale(LC_ALL, ""); 
  
  Veiculo *v1 = new Veiculo(1); 
   // mas nao quero que seja alterado pelo usuario 
  //coloquei para privado, logo nao se pode mais alterar pelo objeto, é preciso um método para fazer essa alteração
 
  cout<< v1->getVelMax() << endl; 
  v1->setVelMax(250);
  cout<< v1->getVelMax();

  Veiculo *v2 = new Veiculo(2); 


  Veiculo *v3 = new Veiculo(3); 
    


  
  system("pause"); 
  return 0;
}
