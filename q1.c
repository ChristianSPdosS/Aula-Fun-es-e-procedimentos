//Implemente a seguinte função (NÃO IMPLEMENTE PROCEDIMENTO). Escreva no espaço abaixo apenas o código necessário da função.

/*
int Abs(int x)
Devolve o valor absoluto de x

Abs(-5) --> 5
Abs(5)  --> 5
  */

#include <stdio.h>

//codigo necessario da funcao
int Abs(int x){
  if(x < 0){
    printf("Abs(%d) --> %d\n" , x , x * -1);
  }
  else {
    printf("Abs(%d) --> %d\n" , x , x);
  }
}
//

int main(){
 
  Abs(5);
  Abs(-5);

  return 0;
}