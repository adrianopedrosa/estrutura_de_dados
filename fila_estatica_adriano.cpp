//fila estática Adriano
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	int i, iniciofila, fimfila, opcao;
	int fila[MAX];
	iniciofila=0;
	fimfila=-1;
	
	for(i=0; i<10; i++)
	{
		fila[i]=NULL;
	}
	
	do
	{
		printf("\n PROGRAMA PARA IMPLEMENTACAO DE FILA\n");
        printf(" 1 para enfileirar \n");
        printf(" 2 para desenfileirar \n");
        printf(" 3 para mostrar fila \n");
        printf(" 4 limpar tela \n");
        printf(" 5 para encerrar o programa\n");
        printf(" Digite uma Opcao: ");
        scanf("%i", &opcao);
		
		if(opcao<1 || opcao>5)
		{
			printf("NUMERO INVALIDO! \n");
		}
		//enfileirar
		if(opcao == 1)
		{
			fimfila=fimfila+1;
			if(fimfila == MAX)
			{
				printf("Fila cheia! ");
				fimfila=fimfila-1;	
			}
			else
			{
				printf("Digite um valor para inserir na fila: ");
				scanf("%i", &fila[fimfila]);	
			}	
		}
		//desenfileirar
		if(opcao==2)
		{	
			if(fimfila < iniciofila)
			{
				printf("Fila vazia! ");	
			}
			else
			{
				fila[iniciofila]=0;
				iniciofila++;
			}	
		}
		//mostrar fila
		if(opcao==3)
		{
			printf("\n");
			for(i=0; i<10; i++)
			{
				printf("%i    ", i);//índice
			}
			printf("\n");
			for(i=0; i<10; i++)
			{
				printf("%i    ", fila[i]);//valores
			}
			printf("\n");	
		}
		
		if(opcao==4)
		{
			system("cls");
		}	
	}while(opcao!=5);
		 
return 0;	
}

