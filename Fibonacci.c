/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Calcular o n-ésimo termo da sequência de Fibonacci (versões iterativa e recursiva)
	
					1  1  2  3  5  8  13  21  ...
					a  b  c
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int fibonacciI (int n);
int fibonacciR (int n);

//implementação da função main
void main ()
{
	//declaração de variáveis
	int x = 50;
	
	printf ("Versao iterativa: %do. termo da sequencia => %d\n\n", x, fibonacciI (x));
	
	system ("pause");
	
	printf ("Versao recursiva: %do. termo da sequencia => %d\n\n", x, fibonacciR (x));
}

//implementações das funções
int fibonacciI (int n)
{
	//declaração de variáveis
	int a, b, c, i;
	
	//se n for 1 ou 2, não será feita a soma dos dois anteriores (afinal, não existirão dois elementos anteriores)
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else  //ou seja, o n é maior ou igual a 3
	{
		a = 1;
		b = 1;
		
		for (i=3;i<=n;i++)
		{
			//calculando o i-ésimo termo
			c = a + b;
			
			//atualizando os valores de a e b para cada nova iteração
			a = b;
			b = c; 
		}
		
		//retornando o n-ésimo termo
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
