/*
Altere o programa anterior de forma que a função linha escreva qualquer caractere, e não apenas
o caractere *.
  */

#include <stdio.h>

void crt(int num, char x){
  for(int i=0; i < num; i++){
    printf("%c" , x);
  }
  printf("\n");
}

int main() {

  crt(3 , 'a');
  crt(5 , 'b');
  crt(7 , 'c');
  crt(5 , 'd');
  crt(3 , 'e');
  
}