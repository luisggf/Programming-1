#include <stdio.h>

int main(void) {
  float c, f;
  printf("Input farenheit temperature value: ");
  scanf("%f", &f);
  c = (f - 32) / 1.8;
  printf("Celsius value is: %.2f\n", c);
for (; ;){
  printf("Input farenheit temperature value: ");
  scanf("%f", &f);
  c = (f - 32) / 1.8;
  printf("Farenheit value is: %.2f\n", c);
if (f == 356){
  break;
}}
  return 0;
}