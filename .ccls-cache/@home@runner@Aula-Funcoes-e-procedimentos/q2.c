/*
Implemente a seguinte função (NÃO IMPLEMENTE PROCEDIMENTO). Escreva no espaço abaixo apenas o código necessário da função.
*/

/*
long int n_segundos(int n_horas)
Devolve o número de segundos existentes em um conjunto de horas.
  n_segundos(0) --> 0
  n_segundos(1) --> 3600
  n_segundos(2) --> 7200
    */

#include <stdio.h>

//codigo necessario da funcao
long int n_segundos(int n_horas){
  //printf("n_segundos(%d) --> %d\n" , n_horas , n_horas * 3600);
  return n_horas * 3600;
}
//

int main() {

  for(int i =0; i < 3; i++){ 
    printf("n_segundos(%d) --> %ld\n" , i ,  n_segundos(i));
    }


  return 0;
}