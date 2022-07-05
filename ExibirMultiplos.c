/*
	FAETERJ-Rio
	Fundamentos de Programa��o  -  2022/1
	Turma: Manh�
	Data: 26/05/2022
	
	Lista de Exerc�cios VIII (recursividade)
	
	Quest�o 02: Desenvolver uma fun��o recursiva que exiba todos os 
	m�ltiplos do n�mero N, inferiores ou iguais ao valor V.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibirMultiplos (int n, int v);
void exibir (int n, int v, int i);

//main
void main ()
{
	//declara��o de vari�veis
	int numero, limite;
	
	//leitura dos dados de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("Entre com o limite: ");
	scanf ("%d", &limite);
	
	//chamando a fun��o
	exibirMultiplos (numero, limite);
}

//implementa��o das fun��es
void exibirMultiplos (int n, int v)
{
	exibir (n, v, 0);  //come�ando o 'i' com o valor 0 (primeiro m�ltiplo de qualquer n�mero)
}

void exibir (int n, int v, int i)
{
	if (i <= v)  //caso geral
	{
		//verificando se 'i' � m�ltiplo de 'n'
		if (i % n == 0)
		{
			printf ("%d ", i);
		}
		
		//chamando a fun��o recursivamente, passando o pr�ximo valor de 'i'
		exibir (n, v, i+1);
	}
	//caso base impl�cito: i > v
}
