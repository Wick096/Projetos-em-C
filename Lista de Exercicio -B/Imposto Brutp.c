#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float vSalario,salFunc,taxaImp,calculoImp,impBru,desc,s12,s8,taxa;
    int nDependentes;
    char nome[20];
    
    FILE*arq;
    printf("Nomeie o arquivo:");
    scanf("%s",&nome);
    arq=fopen(nome,"w");
    
    printf("Digite o número de dependentes: ");
    scanf("%d",&nDependentes);
    printf("Digite o valor do salário minímos:\nR$");
    scanf("%f",&vSalario);
    printf("Digite o valor do salário do funcionário:\nR$");
    scanf("%f",&salFunc);
    printf("Digite o valor da taxa de imposto bruto:\n");
    scanf("%f",&taxa);
    
   s12=vSalario*12;
   s8=vSalario*5;
    
    if(salFunc>=s12)
    {
        calculoImp=salFunc*0.20;
        impBru=(calculoImp*0.4)+calculoImp;
        printf("O valor do desconto bruto é:\nR$%f",calculoImp);
        printf("O valor do desconto liquído é:\nR$%f",impBru);
    }
    else if(salFunc>=s8)
    {
        calculoImp=salFunc*0.8;
        impBru=(calculoImp*0.4)+calculoImp;
        printf("O valor do desconto bruto é:\nR$%f",calculoImp);
        printf("\nO valor do desconto liquído é:\nR$%f",impBru);
    }
    else
    {   
        desc=(taxa/100)*salFunc;
        printf("O valor do desconto é:%f",desc);
    }
    
    
    fclose(arq);
    return 0;
}