/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Calcular o n-�simo termo da sequ�ncia de Fibonacci (vers�es iterativa e recursiva)
	
					1  1  2  3  5  8  13  21  ...
					a  b  c
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int fibonacciI (int n);
int fibonacciR (int n);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int x = 50;
	
	printf ("Versao iterativa: %do. termo da sequencia => %d\n\n", x, fibonacciI (x));
	
	system ("pause");
	
	printf ("Versao recursiva: %do. termo da sequencia => %d\n\n", x, fibonacciR (x));
}

//implementa��es das fun��es
int fibonacciI (int n)
{
	//declara��o de vari�veis
	int a, b, c, i;
	
	//se n for 1 ou 2, n�o ser� feita a soma dos dois anteriores (afinal, n�o existir�o dois elementos anteriores)
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else  //ou seja, o n � maior ou igual a 3
	{
		a = 1;
		b = 1;
		
		for (i=3;i<=n;i++)
		{
			//calculando o i-�simo termo
			c = a + b;
			
			//atualizando os valores de a e b para cada nova itera��o
			a = b;
			b = c; 
		}
		
		//retornando o n-�simo termo
		return c;
	}
}

int fibonacciR (int n)
{
	if ((n == 1) || (n == 2))	//casos bases
	{
		return 1;
	}
	else
	{
		return fibonacciR (n-1) + fibonacciR (n-2);
	}
}
