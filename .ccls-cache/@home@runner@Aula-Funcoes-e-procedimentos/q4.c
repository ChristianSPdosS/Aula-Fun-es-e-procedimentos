/*
Implemente a seguinte função (NÃO IMPLEMENTE PROCEDIMENTO). Escreva no espaço abaixo apenas o código necessário da função.
*/

/*
void troca(int *x, int *y)
  Realizar a troca de valores entre as variáveis passadas como parametros na funcao troca.
    */

#include <stdio.h>

//codigo necessario da funcao
void troca(int *x, int *y){
   printf("Valor de x = %d\nValor de y = %d\n" , *x , *y);
int i = *x;
  *x = *y;
  *y = i;

  printf("Valor trocado de x = %d\nValor de trocado de y = %d\n" , *x , *y);
}
//

int main(){
  int k, l;

  printf("Escolha um valor para x:\n");
  scanf("%d" , &k);
  printf("Escolha um valor para y:\n");
  scanf("%d", &l);

  int *ptr1 = &k;
  int *ptr2 = &l;
  

  troca(ptr1 , ptr2);

  return 0;
  
}