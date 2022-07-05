/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Multiplica��o: calcular a x b a partir de sucessivas somas (ou seja, somar o valor de 'a' 'b' bezes).
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int multiplicacao (int a, int b);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int x = 2, y = 100;
	
	printf ("%d x %d = %d", x, y, multiplicacao (x,y));	
}

//implementa��es das fun��es
int multiplicacao (int a, int b)
{
	//caso base
	if (b == 0)
	{
		return 0;
	}
	else
	{
		//caso geral
		return a + multiplicacao (a, b-1);
	}
}
