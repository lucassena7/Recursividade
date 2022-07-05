/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 23/10/2021 (aula extra)
	
	O que � exibido pela fun��o?
	
		Resposta: exibe os n�meros de 1 at� 'numero' 
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibir (int numero);

//implementa��o da fun��o main
void main ()
{
	exibir (100);
}

void exibir (int numero)
{
	if (numero > 0)					//caso geral
	{
		//printf ("%d ", numero);
		exibir (numero-1);			//antes de exibir 'numero', � feita a chamada recursiva para exibir os demais valores, inferiores a 'numero'
		printf ("%d ", numero);		//por esse motivo, os n�meros s�o apresentados em ordem crescente, de 'numero' a 1
	}
				
	//caso base impl�cito: numero <= 0
}
