//Aula 1/ Bimestre 2- Funções e procedimentos

/*Escreva um programa que, recorrendo a três funções distintas, escreva na tela a seguinte saída:
***
****
*****
****
***
*/

#include <stdio.h>

//procedimento para 3 *
void At3x() {
    for(int i= 0; i < 3; i++ ){
        printf("*");
    }
    printf("\n");
}

//procedimento para 5*
void At5x() {
    for(int i=0; i < 5; i++){
        printf("*");       
    }
    printf("\n");
}

//procedimento para 7*
void At7x() {
    for(int i= 0; i < 7; i++){
        printf("*");
    }
    printf("\n");
}

//Utlizando passagem de parametro
void At(int num) {
  for(int i = 0; i < num; i++ ){
    printf("*");
  }
  printf("\n");
}
int main(){

//Imprime utilizando 3 procedimentos, um para para cada quantidade de *
    At3x();
    At5x();
    At7x();
    At5x();
    At3x();

  //Imprime utlizando apenas um procedimento, através da passagem de parametro
  At(3);
  At(5);
  At(7);
  At(5);
  At(3);
  
    return 0;
}