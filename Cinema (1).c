#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

//struct f
//{
       //char nFilme[80];
       //int qtdFilme;
       //int dd[1]=20;
//};

int calcQtd(int v1,int q)
{
    int m1;
    m1=q-v1;
    
    return m1;
}


int main ()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    
    FILE*arq;
    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome);
    
    int codFil;
    int contdd=0,contaR=0,contmJ=0,contdD=0,contsF,contmN=0,contp=0,contbB=0,contseven=0;
    int dd=20;
    int aR=100,mJ=50,dD=80,sF=60,mM=90,p=65,bB=85,seven=35;
    int qtdFilme,m;
    int tipeI;
    float meia=18.0,inteira=36.0;
    float valor;
   
    while(codFil!=0){
    printf("\nDr.Dottlie\n2020- Fantasia\n1H 41min\n");
    printf("\nAves de Rapina\n2020- ComicBoon\n1H 49min\n");
    printf("\nMaria e João\n2020- Mistério\n1H 27min\n");
    printf("\nDois Irmãos:\n2020- Animação\n1H 42min\n");
    printf("\nSonic:O Filme\n2020- Comédia\n1H 51min\n");
    printf("\nMinha Mãe é uma peça\n2020- Comédia/Nacional\n1H 40min\n");
    printf("\nParasita\n2019- Drama\n2H 12min\n");
    printf("\nBad Boys\n2020- Ação Policial\n2H 4min\n");
    printf("\n1917\n2019- Drama/Guerra\n1H 59min\n");
    
    printf("\nSelecione o filme desejado: ");
    scanf("%d",&codFil);
    
    if(codFil==1)
    {   
        
        //m=dd-qtdFilme;
        printf("Lugares Disponiveís: %d\n",dd);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme);
        m=calcQtd(qtdFilme,dd);
        if(qtdFilme>m)
        {
            printf("Sem Disponiveís");
        }
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
       if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",dd);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    }
    
    else if(codFil==2)
    {
        
        printf("Lugares Disponiveís: %d\n",aR);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme);
        m=calcQtd(qtdFilme,aR);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",aR);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
        
    }
    else if(codFil==3)
    {

        printf("Lugares Disponiveís: %d\n",mJ);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme); 
        m=calcQtd(qtdFilme,mJ);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
       else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",mJ);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
        
    }
    else if(codFil==4)
    {
        
        printf("Lugares Disponiveís: %d\n",dD);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme); 
        m=calcQtd(qtdFilme,dD);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        fprintf(nome,"%d",dD);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    
    }
    
    else if(codFil==5)
    {
        
        printf("Lugares Disponiveís: %d\n",sF);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme); 
        m=calcQtd(qtdFilme,sF);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
         else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",sF);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    }
    
    else if(codFil==6)
    {
        
        printf("Lugares Disponiveís: %d\n",mM);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme);  
        m=calcQtd(qtdFilme,mM);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12) 
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",mM);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    }
    
    else if(codFil==7)
    {
        
        printf("Lugares Disponiveís: %d\n",p);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme);  
        m=calcQtd(qtdFilme,p);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12)
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",p);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    }
    else if(codFil==8)
    {
        
        printf("Lugares Disponiveís: %d\n",bB);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme); 
        m=calcQtd(qtdFilme,bB);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12) 
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",bB);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    }
    
    else if(codFil==9)
    {
        
        printf("Lugares Disponiveís: %d\n",seven);
        printf("Quantidade Desejada: ");
        scanf("%d",&qtdFilme);
        m=calcQtd(qtdFilme,seven);
        printf("Lugares Disponiveís: %d\n",m);
        printf("Digite o tipo de ingresso (11-Meia ou 12-Inteira: )");
        scanf("%d",&tipeI);
        if(tipeI==11)
        {
            valor=qtdFilme*18.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        else if(tipeI==12) 
        {
           valor=qtdFilme*36.0;
            printf("Valor à pagar:\nR$%f\n",valor);
        }
        
        if(qtdFilme>m)
        {
            printf("Não há luares disponiveís !");
        }
        
        fprintf(nome,"%d",seven);
        fprintf(nome,"%d",m);
        fprintf(nome,"%d",valor);
    
    }
        if(codFil==1)
        {   
            dd=m;
           
        }
        else if(codFil==2)
        {
            aR=m;
        }
        else if(codFil==3)
        {
            mJ=m;
        }
        else if(codFil==4)
        {
            dD=m;
        }
        else if(codFil==5)
        {
            sF=m;
        }
        else if(codFil==6)
        {
            mM=m;
        }
        else if(codFil==7)
        {
            p=m;
        }
        else if(codFil==8)
        {
            bB=m;
        }
        else if(codFil==9)
        {
            seven=m;
        }
        
        
        
    }
    
    fclose(arq);
    return 0;

}