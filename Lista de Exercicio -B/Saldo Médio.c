#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    float credito,saldoM;
    char nome[20];
    
    printf("Digite o saldo médio:\n");
    scanf("%f",&saldoM);
    
    if(saldoM>200)
    {
        printf("O Cliente não possuí crédito :( ");
    }
    else if(saldoM>200 && saldoM<400)
    {
        credito=saldoM*0.2;
        printf("O cliente tem de saldo médio:%f",saldoM);
        printf("O Cliente tem direito: %f%",credito);
    }  
    else if(saldoM>400 && saldoM<600)
    {
        credito=saldoM*0.3;
        printf("O cliente tem de saldo médio:%f",saldoM);
        printf("O Cliente tem direito: %f%",credito);
    }  
    else if(saldoM>600)
    {
        credito=saldoM*0.4;
        printf("O cliente tem de saldo médio:%f",saldoM);
        printf("O Cliente tem direito: %f%",credito);
    }   
    
    return 0;
}