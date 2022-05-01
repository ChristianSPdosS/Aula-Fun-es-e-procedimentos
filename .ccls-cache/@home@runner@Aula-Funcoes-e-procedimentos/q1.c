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
    //printf("Abs(%d) --> %d\n" , x , x * -1);
    return x * (-1);
  }
  else {
   // printf("Abs(%d) --> %d\n" , x , x);
    return x;
  }
}
//

int main(){

int i = 5;
 

  printf("Abs(%d) --> %d\n" , i , Abs(i));
 
  i = -5;

  printf("Abs(%d) --> %d\n" , i , Abs(i));

  return 0;
}