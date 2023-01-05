#include<stdio.h>
 int main()
{
int i,num[10],faz_parte,n_faz;

faz_parte =0; /* Armazena a quantidade de ele
mentos
que fazem parte do intervalo*/
n_faz = 0; /* Armazena a quantidade de elementos
que não fazem parte do intervalo*/
printf(" \n Digite os numeros para verificar \n");
for(i=0;i<10;i++)
   {
     scanf("%d",&num[i]); /* coletando os números*/
    } 
  for(i=0;i<10;i++) /*pra verificar os números digitados*/
   {
      if(num[i]>=10 && num[i]<=20) 
       {
         faz_parte= faz_parte + 1; /* se for maior ou igual a 10 e menor ou igual a 20, faz_parte armazena mais um elemento */
        } else
          n_faz= n_faz + 1;
    }
printf(" \n %d numeros fazem parte do intervalo[10,20] \n",faz_parte); 
printf(" \n %d numeros nao fazem parte do intervalo[10,20]",n_faz);
return 0;
}