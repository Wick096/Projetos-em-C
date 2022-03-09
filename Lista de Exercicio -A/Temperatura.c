#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char nome[20];
    float qtdChuva,convert1,convertCh,temp;
    
    FILE*arq;
    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome);
    arq=fopen(nome,"w");
    
    printf("Digite a temperatura (em Fahreint):");
    scanf("%f",&temp);
    printf("Digite a quantidade de chuva: ");
    scanf("%f",&qtdChuva);
    
    convert1=(5*temp-160)/9;
    convertCh=qtdChuva*25.4;
    
    printf("A temperatura convertida para Celsius é :%fC°",convert1);
    printf("A conversão para milimetros foi:%f ",convertCh);

    fprintf(nome,"%f",convert1);
    fprintf(nome,"%f",convertCh);
    
    fclose(arq);
    return 0;
    
    
}