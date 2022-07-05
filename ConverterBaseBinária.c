/*
	FAETERJ-Rio
	Fundamentos de Programa��o  -  2022/1
	Turma: Manh�
	Data: 26/05/2022
	
	Lista de Exerc�cios VIII (recursividade)
	
	Quest�o 03: Fazer uma fun��o recursiva que, dado um n�mero 
	inteiro N, exiba o mesmo na base 2 (bin�ria).
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void binario (int n);

//main
void main ()
{
	//declara��o de vari�veis
	int numero;
	
	//leitura dos dados de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	binario (numero);
}

//implementa��o das fun��es
void binario (int n)
{
	if (n > 0)	//caso geral
	{
		//chamando a fun��o recursivamente
		binario (n/2);
		
		//exibindo, ao final, o resto da divis�o de n por 2
		printf ("%d", n%2);
	}
}
