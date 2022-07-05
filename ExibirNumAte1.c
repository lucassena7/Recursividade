/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 23/10/2021 (aula extra)
	
	O que � exibido pela fun��o?
	
		Resposta: exibe os n�meros de 'numero' at� 1
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibir (int numero);

//implementa��o da fun��o main
void main ()
{
	exibir (10);
}

void exibir (int numero)
{
	if (numero > 0)					//caso geral
	{
		printf ("%d ", numero);		//primeiro 'numero' � exibido e, em seguida, a chamada recursiva � feita para exibir os demais valores, inferiores a 'numero'
		exibir (numero-1);			//por esse motivo, os n�meros s�o apresentados em ordem decrescente, de 'numero' a 1
	}
				
	//caso base impl�cito: numero <= 0
}
