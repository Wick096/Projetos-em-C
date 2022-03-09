#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");
   char nome[20];
   float alt,pIdeal;
   char sexo[10];
   
   printf("Digite seu sexo e altura: ");
   scanf("%s %f",sexo,&alt);
   
   if(strcmp(sexo,"masculino")==0)
   {
       pIdeal=(72.7*alt)-58;
       printf("Peso:%f",pIdeal);
   }
   else if(strcmp(sexo,"feminino")==0)
   {
       pIdeal=(62.1*alt)-44.70;
       printf("Peso:%f",pIdeal);
   }
   
}