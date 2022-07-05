/*****************************************************************************************************************

	FAETERJ-Rio
	FPR - 2021/2 - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 08/11/2021
	
	Quest�o 04 [2,5 pontos]:
	Desenvolver uma fun��o recursiva, em C, que, dados um vetor de inteiros vet e um n�mero inteiro n, 
	determine o n�mero de divisores de n existentes no vetor vet.

*****************************************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int questao04 (int vetor[], int tamanho, int n, int i);

//main
void main ()
{
	//declara��o de vari�veis
	int v[10] = {1,8,4,5,2,3,4,9,6,5};
	int quant, n = 15;
	
	//chamando a fun��o
	quant = questao04 (v, 10, n, 0);
	
	//exibindo o resultado
	printf ("\nForam encontrados %d divisores de %d no vetor.", quant, n);
}

//implementa��es das fun��es
int questao04 (int vetor[], int tamanho, int n, int i)
{
	//caso geral
	if (i < tamanho)
	{
		//verificando se o elemento vetor[i] � divisor de 'n'
		if (n % vetor[i] == 0)
		{
			return 1 + questao04 (vetor, tamanho, n, i+1);
		}
		else
		{
			return /*0 +*/ questao04 (vetor, tamanho, n, i+1);
		}
	}
	else
	{
		return 0;
	}
}
