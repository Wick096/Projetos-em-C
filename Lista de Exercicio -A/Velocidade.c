#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char nome[20];
    float massa,acelaracao,tempo,massa2,comPista,trabalho,velocidade;
    
    FILE*arq;
    printf("\nDigite o nome do arquivo: ");
    scanf("%s",&nome);
    arq=fopen(nome,"w");
    
    printf("Digite o valor da massa: ");
    scanf("%f",&massa);
    printf("Digite o valor da acelaração: ");
    scanf("%f",&acelaracao);
    printf("Digite o tempo: ");
    scanf("%f",&tempo);
    
    massa2=massa*1000;
    velocidade=acelaracao*tempo;
    trabalho=massa2*(velocidade*velocidade)/2;
    comPista=acelaracao(tempo*tempo)/2;
    
    printf("\nA velocidade é: \n%f",velocidade);
    printf("\nO espaço percorrido foi: %f",comPista);
    printf("\nO trabalho exercido foi: %f",trabalho);
    
    fprintf(nome,"%f",velocidade);
    fprintf(nome,"%f",comPista);
    fprintf(nome,"%f",trabalho);
    
    fclose(arq);
    return 0;
    
    
}