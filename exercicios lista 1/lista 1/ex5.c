#include <stdio.h>

int main(void) {
 float dsc, prz, nv;
  printf("Inform product value: ");
  scanf("%f", &prz);
  
  if (prz >= 100 && prz < 1000){
    dsc = (prz * .1);
    nv = prz - dsc;
    printf("You got a 10/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz >= 1000 && prz <= 5000){
    dsc = (prz * .15);
    nv = prz - dsc;
    printf("You got a 15/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 5000 && prz <= 10000){
    dsc = (prz * .2);
    nv = prz - dsc;
    printf("You got a 20/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 0 && prz < 100){
    dsc = (prz * .5);
    nv = prz - dsc;
    printf("You got a 5/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 10000){ 
    dsc = (prz * .225);
    nv = prz - dsc;
    printf("You got a 22.5/100 discount, your product price is now: %.1f\n", nv);  
  }
for (; ;){
    printf("Inform product value: ");
  scanf("%f", &prz);
  
  if (prz >= 100 && prz < 1000){
    dsc = (prz * .1);
    nv = prz - dsc;
    printf("You got a 10/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz >= 1000 && prz <= 5000){
    dsc = (prz * .15);
    nv = prz - dsc;
    printf("You got a 15/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 5000 && prz <= 10000){
    dsc = (prz * .2);
    nv = prz - dsc;
    printf("You got a 20/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 0 && prz < 100){
    dsc = (prz * .5);
    nv = prz - dsc;
    printf("You got a 5/100 discount, your product price is now: %.1f\n", nv);  
  }
  if (prz > 10000){ 
    dsc = (prz * .225);
    nv = prz - dsc;
    printf("You got a 22.5/100 discount, your product price is now: %.1f\n", nv);  
  }}
  
return 0;
}