#include <stdio.h>

int main(void) {
//para parar loop coloque 13 duas vezes (ja vai acostumando p eleição)
  int a, b;
  printf("Insert A value: ");
   scanf("%i", &a);
  printf("Insert B value: ");
   scanf("%i", &b);
  printf("New A value is %i, and B value is now %i\n", b, a);
for (; ;){
  printf("Insert A value: ");
   scanf("%i", &a);
  printf("Insert B value: ");
   scanf("%i", &b);
  printf("New A value is %i, and B value is now %i\n", b, a);  

if (a == 13 && b == 13){
  break;
}}
  return 0;
}