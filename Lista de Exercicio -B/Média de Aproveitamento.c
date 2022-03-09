#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

float medAp(float n1,float n2,float n3,float me)
{
    float ma;
    ma=(n1+(n2*n2)+(n3*n3)+me)/7;
    
    return ma;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int nIden;
    float n1,n2,n3,me,ma;
    
    printf("\nDigite o número de identificação do aluno: ");
    scanf("%d",&nIden);
    printf("\nDigite as notas do aluno: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("\nDigite a média dos exercícios do aluno: ");
    scanf("%f",&me);
    
    ma=medAp(n1,n2,n3,me);
    printf("\nA média de aproveitamento do aluno é: %f",ma);
    
    return 0;
    
}