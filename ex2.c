/*
Altere o programa anterior de forma que a função linha escreva qualquer caractere, e não apenas
o caractere *.
  */

#include <stdio.h>

//procedimento utilizando passagem de parametro para int e char
void crt(int num, char x){
  for(int i=0; i < num; i++){
    printf("%c" , x);
  }
  printf("\n");
}

int main() {

  //Imprime os caracteres declarados o número de vezes declaradas
  crt(10 , 'a');
  crt(5 , 'b');
  crt(7 , 'c');
  crt(5 , 'd');
  crt(3 , 'e');

  return 0;
  
}