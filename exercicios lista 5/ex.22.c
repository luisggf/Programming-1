#include <stdio.h>

#include <stdlib.h>

/*

Faça um programa que leia um vetor de 20 inteiros positivos (permita

apenas que valores corretos sejam digitados, pedindo para o usuário repetir cada

número negativo até que ele digite um positivo) e imprima todos os valores abaixo da

média desses valores.

*/

int main(){

 int num[20], soma = 0, count = 0;

 for(int i = 0; i < 20; i++){

   printf("Informe um numero: ");

   scanf("%d", &num[i]);

   soma = soma + num[i];

   while (num[i] < 0){

     if(num[i] < 0){

       count = count+1;

       printf("\nNumero %d Invalido!", num[i]);

       printf("\nInforme um numero positivo inteiro: ");

       scanf("%d", &num[i]);

     }

   }

 }

 printf("\nValores abaixo da media(%d):\n", soma/20);

 for(int i = 0; i < 20; i++){

   if(num[i] < soma / (20+count)){

     printf("%d\n", num[i]);

   }

 }

 return 0;

}