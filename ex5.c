/*
#include <stdio.h>
 void f1()
{
 printf("f1\n");
 f2();
 }
 void f2()
 {
 printf("f2\n");
 }
 int main()
 {
 f1();
 return 0;
 }
*/

#include <stdio.h>
 void f1();
void f2();
 int main()
 {
 f1();
 return 0;
 }
 void f1()
 {
 printf("f1\n");
 f2();
 }
 void f2()
 {
 printf("f2\n");
}