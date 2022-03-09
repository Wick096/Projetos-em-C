#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char opMedia[30];
    float n1,n2,n3,calculo;
    
    printf("Digite a opção:Harmonica,Aritmética,Ponderada: ");
    scanf("%s",opMedia);
    printf("Digite as 3 notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    if(strcmp(opMedia,"harmonica")==0)
    {
        calculo=3/(1/n1+1/n2+1/n3);
        printf("A média harmônica é:%f",calculo);
    }
    else if(strcmp(opMedia,"aritmetica")==0)
    {
        calculo=(n1+n2+n3)/3;
        printf("A média aritmética é:%f",calculo);
    }
    else if(strcmp(opMedia,"ponderada")==0)
    {
        calculo=((n1*3)+(n2*3)+(n3*4))/10;
        printf("A média ponderada é:%f",calculo);
        
    }
    return 0;
}