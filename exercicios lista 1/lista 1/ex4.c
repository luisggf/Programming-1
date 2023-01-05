#include <stdio.h>

int main(void) {
 float sal1, sal2, nsal;
  sal1 = 622.00;
  printf("Insert your salary: ");
  scanf("%f", &sal2);
   nsal = sal2 / sal1;
  printf("Your salary is equivallent to %.2f minimum wages\n", nsal);

for (; ;){
  printf("Insert your salary: ");
  scanf("%f", &sal2);
   nsal = sal2 / sal1;
  printf("Your salary is equivallent to %.2f minimum wages\n", nsal);

if (sal2 == 17){
  printf("Program has been shut down");
  break;
}}
  return 0;
}