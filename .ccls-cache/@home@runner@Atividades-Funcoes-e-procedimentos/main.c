//Aula 1/ Bimestre 2- Funções e procedimentos

/*Escreva um programa que, recorrendo a três funções distintas, escreva na tela a seguinte saída:
***
****
*****
****
***
*/

#include <stdio.h>

//parametro para 3 *
void At3x() {
    for(int i= 0; i < 3; i++ ){
        printf("*");
    }
    printf("\n");
}

//parametro para 5*
void At5x() {
    for(int i=0; i < 5; i++){
        printf("*");       
    }
    printf("\n");
}

//parametro para 7*
void At7x() {
    for(int i= 0; i < 7; i++){
        printf("*");
    }
    printf("\n");
}

//parametro universal

void At(int j,char k) {
for(int i=0; i < j; i++){
    printf("%c",k);
}
printf("\n");
}

int main(){

//Imprime utilizando um parametro para cada quantidade de *
    At3x();
    At5x();
    At7x();
    At5x();
    At3x();

    //Imprime utilizando apenas um parametro de *, só que com o valor alteravel, e caractere tbm
    At(3 , 'a');
    At(5 , 'b');
    At(7 , 'c');
    At(5 , 'd');
    At(3 , 'e');   

    return 0;
}