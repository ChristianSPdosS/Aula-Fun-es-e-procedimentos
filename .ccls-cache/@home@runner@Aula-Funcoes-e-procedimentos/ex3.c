/*
Escreva um programa que solicite dois números ao usuário e apresente na tela o resultado da sua
soma e o dobro de cada um deles.
  */

#include <stdio.h>

//cria uma variavel para soma
int soma(int n, int m) {

  return n + m;
}
//cria uma variavel para dobro
int dobro(int x) {

  return 2 * x;
}

int main(){

int n,m,x;

  //solicita os numeros e imprime os resultados
  printf("Digite um número:\n");
  scanf("%d*%c" , &n);
  printf("Digite outro número:\n");
  scanf("%d*%c" , &m);
  printf("%d + %d = %d\n" , n , m , soma(n,m));
  x = n;
  printf("2 * %d = %d\n" , x , dobro(x));
  x = m;
  printf("2 * %d = %d\n" , x , dobro(x));

  return 0;
}