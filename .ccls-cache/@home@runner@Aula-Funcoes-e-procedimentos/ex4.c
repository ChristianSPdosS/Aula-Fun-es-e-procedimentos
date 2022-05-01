#include <stdio.h>

 int i = 5; // global

 void f1()
{
 i = 2; // altera -se a variável global
 printf("f1 :: global: %d\n", i);
 int i = 3; // cria-se uma nova variável local
 printf("f1 :: local: %d\n", i);
}


 void f2()
 {
 printf("f2 :: global: %d\n", i);
 }

 int main()
 {
 printf("main :: global: %d\n", i);
 i = 3; // altera -se a variável global
 char i = 'c'; // local e global para próximo bloco de instruções
 printf("main :: local: %c\n", i);//c

 { // novo escopo de vida
 printf("main :: bloco :: global: %c\n", i);
 int i = 4; // local

 printf("main :: bloco :: local: %d\n", i);
 } // fim do escopo de vida da variável int i (4)
 printf("main :: local: %c\n", i);
 f2();
 f1();
 f2();

 return 0;
}