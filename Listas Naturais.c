//2FPR
//Bruno de Oliveira da Silva
//Turno:Manhã

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

typedef struct No
{
   int valor;
   struct No* proximo;
} tipo_no;


struct no_raiz
{
   struct No* primeiro;
   int elementos;
};

struct no_raiz nos_raiz[N];

//Funções
int x_divisivel_pelo_indice(int x)
{
   int i;

   for (i = 2; i < N; i++)
   {
      if (x % i == 0)
      {
         return i;
      }
   }

   return 0;
}

int adcionar_elemento_seguinte_ao_no(tipo_no *elemento_raiz, int valor)
{
   if (elemento_raiz->proximo == NULL)
   {
      tipo_no *elemento = malloc(sizeof(tipo_no));
      elemento->valor = valor;
      elemento->proximo = NULL;
      elemento_raiz->proximo = elemento;
      return 0;
   }

   return adcionar_elemento_seguinte_ao_no(elemento_raiz->proximo, valor);
}

int imprimir_lista_divisiveis(tipo_no *elemento_raiz)
{
   if (elemento_raiz == NULL)
   {
      return 0;
   }

   printf("\t%p\t%i\t%p\n", elemento_raiz, elemento_raiz->valor, elemento_raiz->proximo);

   return imprimir_lista_divisiveis(elemento_raiz->proximo);
}

int main()
{	
   setlocale(LC_ALL,"portuguese");
   FILE *arquivo;
   char nome_arquivo[100];
   int i;
   int quantidade_numeros;
   int auxiliar_leitura;
   int *elementos;

   printf("Digite o nome do arquivo(com extensão .dat) e pressione enter: ");
   scanf("%s",&nome_arquivo);
   
   arquivo = fopen(nome_arquivo, "r");
   if (arquivo == NULL)
   {
       printf("Arquivo não encontrado\n");
       return 0;
   }

   fscanf(arquivo, "%d", &quantidade_numeros);

   elementos = (int*) malloc(sizeof(int) * quantidade_numeros);

   for(i = 0; i < quantidade_numeros; i++)
   {
      fscanf(arquivo, "%d", &auxiliar_leitura);
      elementos[i] = auxiliar_leitura;
   }

   fclose(arquivo);

   for (i = 0; i < N; i++)
   {
      nos_raiz[i].primeiro = NULL;
      nos_raiz[i].elementos = 0;
   }

   for (i = 0; i < quantidade_numeros; i++)
   {
      elementos[i];
      int indice = x_divisivel_pelo_indice(elementos[i]);
      if (nos_raiz[indice].primeiro == NULL)
      {
         nos_raiz[indice].primeiro = malloc(sizeof(tipo_no));
         nos_raiz[indice].primeiro->valor = elementos[i];
         nos_raiz[indice].primeiro->proximo = NULL;
         nos_raiz[indice].elementos++;
      }
      else
      {
         adcionar_elemento_seguinte_ao_no(nos_raiz[indice].primeiro, elementos[i]);
         nos_raiz[indice].elementos++;
      }
   }

   for (i = 0; i < N; i++)
   {
      if (nos_raiz[i].primeiro != NULL)
      {
         printf("[%i]\t%i\t%p\n", i, nos_raiz[i].elementos, nos_raiz[i].primeiro);
         imprimir_lista_divisiveis(nos_raiz[i].primeiro);
      }
   }
   
   printf("Pressione qualquer tecla para sair:");
   getch();
   return 0;
}
