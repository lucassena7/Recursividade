/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Potencia: implementa��es iterativa e recursiva
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int potenciaI (int base, int expoente);
int potenciaR (int base, int expoente);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int x = 2, y = 15;
	
	printf ("versao iterativa: %d^%d = %d\n\n", x, y, potenciaI (x,y));
	
	system ("pause");
	
	printf ("versao recursiva: %d^%d = %d\n\n", x, y, potenciaR (x,y));
}

//implementa��es das fun��es
int potenciaI (int base, int expoente)
{
	//declara��o de vari�veis
	int i, pot = 1;
	
	//gerando iterativamente o valor de 'base' elevado a 'expoente'
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando o resultado
	return pot;
}

int potenciaR (int base, int expoente)
{
	//caso base
	if (expoente == 0)
	{
		return 1;
	}
	else
	{
		//caso geral
		return base * potenciaR (base, expoente-1);
	}
}
