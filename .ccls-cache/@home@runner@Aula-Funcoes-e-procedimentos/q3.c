/*
Implemente a seguinte função (NÃO IMPLEMENTE PROCEDIMENTO). Escreva no espaço abaixo apenas o código necessário da função.
*/

/*
float Max(float x, float y, float w)
Devolver o maior dos valores x,y e w.
  */

#include <stdio.h>

//codigo necessario da funcao
float Max(float x, float y, float w){
  if(x > y && x > w){
    //printf("O maior valor é x = %f\n" , x);
    return x;
  }
  else if(y > x && y > w){
    //printf("O maior valor é y = %f\n" , y);
    return y;
  }
  else if(w > x && w > y){
    //printf("O maior valor é w = %f\n" , w);
    return w;
  }
}
//

int main(){
  
  float x, y, w;

  printf("Escolha três números:\n");
  scanf("%f%*c %f%*c %f%*c" , &x , &y , &w);
 printf(" O maior valor é: %f\n" ,Max(x , y , w));

  return 0;
}