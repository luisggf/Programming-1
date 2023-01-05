#include <stdio.h>

int main(void) {
  int n1, n2, n3;
// input 777 to end program
   printf("Input a number: ");
   scanf("%d", &n1);
   n2 = n1 + 1;
   n3 = n1 - 1;  
  printf("The predecessor and sucessor are, respectvely: %d , %d\n", n3, n2);

for (; ;)
{
   printf("Input a number: ");
   scanf("%d", &n1);
   n2 = n1 + 1;
   n3 = n1 - 1;  
   printf("The predecessor and sucessor are, respectvely: %d , %d\n", n3, n2);

if (n1 == 777){
   printf("Exiting loop\n");
   break;
}
}  
  return 0;
}