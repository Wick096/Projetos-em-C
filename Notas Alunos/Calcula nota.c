//Nome: Bruno de Oliveira da Silva
//2FPR
//Turno: Manhã

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct a {
        int codigo;
        float nMat;
        float nLin;
        float nHum;
        float nNat;
        float nRed;
        float media_P;
};
struct a aluno[2];

int main()
{
	setlocale(LC_ALL,"portuguese");
	FILE *arq;
	arq=fopen("alunos.dat","r");
	
	//Letra D - Ponteiro responsavel pelo arquivo de relátorio.
	FILE*rel;
	
	int pMat[2],pLin[2],pHum[2],pNat[2],pRed[2];
	int i;
	float nMatP[2],nLinP[2],nHumP[2],nNatP[2],nRedP[2];
	char tempSit[2];
	int nLinhas;
	char nome[30];
	
	//Letra A - Leitura do arquivo e armazenamento nas estrutura
	fscanf(arq,"%d",&nLinhas);
	printf("Alunos Salvos no arquivo:%d\n",nLinhas);
	
	for (i=0;i<nLinhas;i++)
	{
		fscanf(arq,"%d %f %f %f %f %f",&aluno[i].codigo,&aluno[i].nMat,&aluno[i].nLin,&aluno[i].nHum,&aluno[i].nNat,&aluno[i].nRed);
	
	
		printf("\nDigite os pesos das  5 notas[Pmat, Plin, Phum, Pnat, Pred]:\n");
			scanf("%d %d %d %d %d",&pMat[i],&pLin[i],&pHum[i],&pNat[i],&pRed[i]);
    }
	
	//Letra C Exibição - no modelo proposto
    printf("\tNotas Originais\t\t\t\t\t\tNotas com Pesos\t\t\t\t\t\t");
 	printf("\nCódigo\tMAT\tLIN\tHUM\tNAT\tRED|\tMat\tLIN\tHUM\tNAT\tRED|\tMedia_p\tSituação\n");
 	
    for (i=0;i<nLinhas;i++)
	{	
		//Calculo das notas com peso
		nMatP[i] = aluno[i].nMat*pMat[i];
		nLinP[i] = aluno[i].nLin*pLin[i];
		nHumP[i]= aluno[i].nHum*pHum[i];
		nNatP[i]= aluno[i].nNat*pNat[i];
		nRedP[i] = aluno[i].nRed*pRed[i];
		
		//Letra B - Calculo e armazenamento na variavel media_P
		aluno[i].media_P=((aluno[i].nMat*pMat[i])+(aluno[i].nLin*pLin[i])+(aluno[i].nHum*pHum[i])+(aluno[i].nNat*pNat[i])+(aluno[i].nRed*pRed[i]))/(pMat[i]+pHum[i]+pLin[i]+pNat[i]+pRed[i]);
		
		//Condição para atribuir a uma variavel os valores "A" para alunos aprovados e "R" para alunos reprovados
		if(aluno[i].media_P>=6){
		
			tempSit[i]='A';
		}
		else
		{
			tempSit[i]='R';
		}

	
		printf("%d \t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%c\n",aluno[i].codigo,aluno[i].nMat,aluno[i].nLin,aluno[i].nHum,aluno[i].nNat,aluno[i].nRed,nMatP[i],nLinP[i],nHumP[i],nNatP[i],nRedP[i],aluno[i].media_P,tempSit[i]);
				
		}
		
		//Letra D
	    printf("\nDigite o nome do arquivo para salvar o relatório:\n");
		scanf("%s",&nome);
		rel=fopen(nome,"w");
		fprintf(rel,"%d",nLinhas);
		
	for(i=0;i<nLinhas;i++)
	{		
		fprintf(rel," \n%d \t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%c",aluno[i].codigo,aluno[i].nMat,aluno[i].nLin,aluno[i].nHum,aluno[i].nNat,aluno[i].nRed,nMatP[i],nLinP[i],nHumP[i],nNatP[i],nRedP[i],aluno[i].media_P,tempSit[i]);
	}
	
	fclose(arq);
	fclose(rel);
	
   
	return 0;
}

