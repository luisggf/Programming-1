#include <stdio.h>

int main(void) {
  float h, min, minf;
   printf("What time is it? ");
   scanf("%f %f", &h, &min);
if (min < 60 && min >= 0 && h < 24 && h >= 0){
   minf = (h * 60) + min;
   printf("It has been %.1f minutes since the day started!\n", minf);
  } 
else {
  printf("Hour or minute input isn't correct, please try again");
}
for (; ;){
     printf("What time is it? ");
   scanf("%f %f", &h, &min);
if (min < 60 && min >= 0 && h < 24 && h >= 0){
   minf = (h * 60) + min;
   printf("It has been %.1f minutes since the day started!\n", minf);
  } 
else {
  printf("Hour or minute input isn't correct, please try again\n");
}
if (h == 212){
  break;
}}
// printf("Hell;o World\n");
  return 0;
}