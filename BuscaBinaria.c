/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 19/05/2022
	
	Recursividade
	
	Busca bin�ria: busca de um elemento em um vetor ordenado crescentemente.	
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 1000

//prot�tipos das fun��es
int buscaBinaria (int vetor[], int tamanho, int valor);
int buscaAuxiliar (int vetor[], int inicio, int fim, int valor);

void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int vetor[TAM], resp, num;
	
	//preenchendo o vetor com valores aleat�rios
	preencher (vetor, TAM);
	
	//exibindo o vetor
    exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("Entre com o numero a ser buscado: ");
	scanf ("%d", &num);
	
	//buscando o elemento no vetor
	resp = buscaBinaria (vetor, TAM, num);	
	
	//verificando o retorno da fun��o
	if (resp == -1)
	{
		printf ("O valor %d nao foi encontrado no vetor\n", num);
	}
	else
	{
		printf ("O valor %d foi encontrado na posicao %d do vetor\n", num, resp);
	}	
}

//implementa��o das fun��es
int buscaBinaria (int vetor[], int tamanho, int valor)
{
	return buscaAuxiliar (vetor, 0, tamanho-1, valor);
}

int buscaAuxiliar (int vetor[], int inicio, int fim, int valor)
{
	int meio;
	
	//verificando se ainda existem posi��es a serem comparadas
	if (inicio <= fim)
	{
		//determinando a posi��o mediana do subvetor considerado nesta chamada
		meio = (inicio + fim)/2;
		
		printf ("\tComparando com a posicao %d\n", meio);
		
		//verificando se 'valor' est� na posi��o 'meio'
		if (vetor[meio] == valor)
		{
			return meio;
		}
		else
		{
			//verificando se a busca continuar� � esquerda da posi��o 'meio'
			if (vetor[meio] > valor)
			{
				return buscaAuxiliar (vetor, inicio, meio-1, valor);
			}
			else
			{
				//a busca deve continuar � direita da posi��o 'meio'
				return buscaAuxiliar (vetor, meio+1, fim, valor);
			}
		}
	}
	else
	{
		//n�o h� mais posi��es a serem tratadas; o elemento n�o existe no vetor
		return -1;
	}
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //armazenando na primeira posi��o um valor de 1 a 10
    vetor[0] = 1 + rand()%10;
    
    //corpo da fun��o
    for(i = 1; i < tamanho; i++)
	{
		vetor[i] = vetor[i-1] + rand()%5; //garantindo que o vetor estar� ordenado crescentemente
    }
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
