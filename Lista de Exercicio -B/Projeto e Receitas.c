#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    int nProjeto,tipoDespesa;
    float valor,valorD,saldoReceita,saldoDespesas;
    
    printf("\nNomeie o arquivo: ");
    scanf("%s",&nome);
    
    FILE*arq;
    arq=fopen(nome,"w");
    
    printf("Digite o valor do projeto:\nR$ ");
    scanf("%f",&valor);
    
    while(valor!=0)
    {
        printf("\nDigite o número do projeto:\n");
        scanf("%d",&nProjeto);
        printf("\nDigite o tipo da despesa:\n seu valor:\nR$ ");
        scanf("%d %f",&tipoDespesa,&valorD);
        
        if(tipoDespesa==1)
        {
            saldoReceita=valor+valorD;
            printf("O saldo de receita é:\nR$%f",saldoReceita);
            
        }
        else
        {
            saldoDespesas=valor-valorD;
            printf("O saldo de despesa é:\nR$%f",saldoDespesas);
            
        }
        fclose(arq);
        return 0;
    }
}    
