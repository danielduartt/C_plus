#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
using namespace std;

class Veiculo{

public: 
  int vel; 
  int tipo; 
  Veiculo(int tipo);
  int getVelMax(); 
  void setVelMax(int va); 
private:
  string nome;
  int VelMax;
  bool ligado; 

};
//prop e met privados só podem ser manipulados pela própria classe
//Só pode ser manipulada pelta classe
//Atraves do obj nao se consegue alterar a velocidade 

//Construtor
Veiculo::Veiculo(int tipo){//caro = 1, aviao = 2, navio = 3
  if(tipo == 1){
    nome = "Carro";
    VelMax = 100;
  }else if(tipo == 2){
    nome = "Aviao";
    VelMax = 200;
  }else if(tipo == 3){
    nome = "Navio";
    VelMax = 250;
  }
}

//get = acessar um valor no private (pegar)
int Veiculo::getVelMax(){
  return VelMax; 
}

//set = alterar uma prop privada (definir) 
void Veiculo::setVelMax(int valor){
  VelMax = valor; 
}


#endif
