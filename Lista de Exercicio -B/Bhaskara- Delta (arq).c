#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float bhask(float a,float b,float c)
{
    float delta;
    delta=((b*b)-(4*a*b));
    
    return delta;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    float a,b,c,valor;
    char nome[20];
    
    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome);
    FILE*arq;
    
    arq=fopen(nome,"w");
    
    printf("Digite os valores de A,B e C: \n\n");
    scanf("%f %f %f",&a,&b,&c);
    
    valor=bhask(a,b,c);
    
    printf("O valor de delta é :%f",valor);
    
    fclose(arq);
    return 0;
}