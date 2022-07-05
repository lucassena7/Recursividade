/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Fatorial: implementa��es iterativa e recursiva
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int fatorialI (int n);
int fatorialR (int n);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int numero = 10;
	
	printf ("versao iterativa: %d! = %d\n\n", numero, fatorialI(numero));
	
	system ("pause");
	
	printf ("versao recursiva: %d! = %d\n\n", numero, fatorialR(numero));
}

//implementa��es das fun��es
int fatorialI (int n)
{
	int i, fat = 1;

	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
		
	return fat;
}

int fatorialR (int n)
{
	if (n == 0)		//caso base
	{
		return 1;
	}
	else						//caso geral
	{
		return n * fatorialR (n-1);
	}
}
