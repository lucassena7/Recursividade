/*
	FAETERJ-Rio
	Fundamentos de Programa��o  -  2022/1
	Turma: Manh�
	Data: 26/05/2022
	
	Lista de Exerc�cios VIII (recursividade)
	
	Quest�o 04: Pede-se a implementa��o de uma fun��o recursiva que 
	exiba os n primeiros termos de uma PG (Progress�o Geom�trica), 
	onde a1 � o seu primeiro termo e q a raz�o.

	Observa��o: uma PG consiste em uma sequ�ncia de valores, 
	iniciadas pelo valor a1. Os demais elementos s�o definidos como 
	o anterior multiplicado pela raz�o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void PG (int n, int a1, int q);

//main
void main ()
{
	//declara��o de vari�veis
	int termo1, razao, quantidade;
	
	//leitura dos dados de entrada
	printf ("Entre com o primeiro termo da PG: ");
	scanf ("%d", &termo1);
	
	printf ("Entre com a razao da PG: ");
	scanf ("%d", &razao);
	
	printf ("Entre com a quantidade de termos da PG: ");
	scanf ("%d", &quantidade);
	
	//chamando a fun��o
	PG (quantidade, termo1, razao);
}

//implementa��o das fun��es
void PG (int n, int a1, int q)
{
	if (n > 0)   //caso geral: repete-se enquanto existir n�mero a ser exibido
	{
		printf ("%d ", a1);
		
		//chamando a fun��o recursivamente
		PG (n-1, a1*q, q);		
	}
}
