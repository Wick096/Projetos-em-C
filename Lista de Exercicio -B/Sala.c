#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int nSala,capa,totAlunos,dispo;
    char nome[20];
    
    FILE*arq;
    arq=fopen(nome,"w");
    
    printf("Digite o número da sala: ");
    scanf("%d",&nSala);
    printf("Digite a capacidade da sala: ");
    scanf("%d",&capa);
    printf("Digite o total de alunos matriculados: ");
    scanf("%d",&totAlunos);
    
    dispo=capa-totAlunos;
    if(totAlunos>capa)
    {
        printf("A sala está lotada !");
    }
    else
    {
        printf("Ainda restam :%d lugares disponíveis",dispo);
    }
    
    fclose(arq);
    return 0;
}