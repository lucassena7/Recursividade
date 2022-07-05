/********************************************************************************************

	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII
	
	Quest�o 05:
	Desenvolver uma fun��o recursiva que, dado um vetor V com quant n�meros inteiros, 
	determine se seus elementos est�o dispostos de maneira a representar uma progress�o 
	aritm�tica.		
	
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int PA (int vetor[], int quant);
int PA_aux (int vetor[], int quant, int razao, int pos);

//main
void main ()
{
	//declara��o de vari�veis
	//int vetor[6] = {1,4,7,10,13,16};
	int vetor[6] = {1,4,7,11,13,16};
	int resp;
	
	//chamando a fun��o
	resp = PA (vetor, 6);
	
	//exibindo o resultado
	if (resp == TRUE)
	{
		printf ("\nE' uma PA");		
	}
	else
	{
		printf ("\nNao e' uma PA");
	}
}

//implementa��o das fun��es
int PA (int vetor[], int quant)
{
	return PA_aux (vetor, quant, vetor[1] - vetor[0], 1);
}

int PA_aux (int vetor[], int quant, int razao, int pos)
{
	//verificando se todo o vetor j� foi percorrido
	if (pos == quant-1)		//caso base: o vetor foi totalmente percorrido e n�o encontramos elementos que descaracterizassem a PA
	{
		return TRUE;
	}
	else
	{
		if (vetor[pos+1] - vetor[pos] != razao)	//caso base: elementos que n�o caracterizam a PA
		{
			return FALSE;
		}
		else
		{
			return PA_aux (vetor, quant, razao, pos+1);
		}
	}
}
