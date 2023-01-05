#include <stdio.h>
// J= C*i*t
int main(void) {
  float j,c,i,m;
  int t;
  printf("How many months ago has your money been invested? ");
  scanf("%i", &t);
  printf("How much have you invested? ");
  scanf("%f", &c);
  printf("What's your income rate? ");
  scanf("%f", &i);
  j = c * i * t;
  m = j + c;
  printf("Your new income is %.2f\n", m);
for (; ;){
  printf("How many months ago has your money been invested? ");
  scanf("%i", &t);
  printf("How much have you invested? ");
  scanf("%f", &c);
  printf("What's your income rate? ");
  scanf("%f", &i);
  j = c * i * t;
  m = j + c;
  printf("Your new income is %.2f\n", m);

if (m >= 1000000){
  printf("You don't need more money");
    break;
}}
  return 0;
}