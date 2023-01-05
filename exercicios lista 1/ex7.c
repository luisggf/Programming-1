#include <stdio.h>

int main(void) {
  float c, f;
  printf("Input celsius temperature value: ");
  scanf("%f", &c);
  f = (((9 * c) + 160) / 5);
  printf("Farenheit value is: %.2f\n", f);
for (; ;){
  printf("Input celsius temperature value: ");
  scanf("%f", &c);
  f = (((9 * c) + 160) / 5);
  printf("Farenheit value is: %.2f\n", f);
if (c == 356){
  break;
}}
  return 0;
}