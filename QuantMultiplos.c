/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 25/10/2021
	
	Recursividade
	
	O que � retornado pela fun��o abaixo?
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int funcao (int A, int B);

//implementa��o da fun��o main
void main ()
{
	//chamando a fun��o
	int x = funcao (32, 6);
	
	//exibindo o resultado
	printf ("\nResultado = %d", x);
}

//implementa��es das fun��es
int funcao (int A, int B)
{
   if (A >= B)
   {
      return 1+ funcao (A-B, B);
   }
   else
   {
      return 0;
   }
}
