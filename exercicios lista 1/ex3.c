#include <stdio.h>

int main(void) {
float value, tax;
  printf("Insert bill value: ");
  scanf("%f", &value);
tax = (value * .1) + value;
  printf("Bill value + taxes = %.2f\n", tax);
for (; ;){
  printf("Insert new bill value: ");
  scanf("%f", &value);
tax = (value * .1) + value;
  printf("Bill value + taxes = %.2f\n", tax);
}
  return 0;
}