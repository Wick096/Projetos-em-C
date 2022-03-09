#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float precoIn,v1,v2,v3,v4,precoF;
    char r1[10],r2[10],r3[10],r4[10];
    
    printf("Digite o preço inicial do carro:\nR$");
    scanf("%f",&precoIn);
    printf("O carro possuí ar condicionado? ");
    scanf("%s",r1);
    printf("O carro possuí pintura metálica?");
    scanf("%s",r2);
    printf("O carro possuí vidros elétricos?");
    scanf("%s",r3);
    printf("O carro possuí direção hidráulica?");
    scanf("%s",r4);
    
    if(strcmp(r1,"sim")==0)
    {
        v1=1750,00;
    }
    else if(strcmp(r2,"sim")==0)
    {
        v2=800;
    }
    else if(strcmp(r3,"sim")==0)
    {
        v3=1200;
    }
    else if(strcmp(r4,"sim")==0)
    {
        v4=2000;
    }
    
    precoF=precoIn+v1+v3+v2+v4;
    
    printf("O preço final:R$%f",precoF);
    
    return 0;
    
    
}