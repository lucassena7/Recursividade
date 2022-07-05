/*
	FAETERJ-Rio
	Fundamentos de Programa��o  -  2022/1
	Turma: Manh�
	Data: 26/05/2022
	
	Lista de Exerc�cios VIII (recursividade)
	
	Quest�o 05:
	Dada uma string s, desenvolver uma fun��o recursiva que 
	determine se s � ou n�o um pal�ndromo.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int palindromo (char s[]);
int palindromoAux (char s[], int inicio, int fim);

//main
void main ()
{
	//declara��o de vari�veis
	char str[30];
	
	//leitura dos dados de entrada
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (str);
	
	//chamando a fun��o
	if (palindromo (str) == TRUE)
	{
		printf ("\nA string %s e' um palindromo!", str);
	}
	else
	{
		printf ("\nA string %s nao e' um palindromo!", str);
	}
}

//implementa��o das fun��es
int palindromo (char s[])
{
	return palindromoAux (s, 0, strlen(s)-1);
}

int palindromoAux (char s[], int inicio, int fim)
{
	if (inicio < fim)  //caso geral	
	{
		//verificando se os caracteres das posi��es 'inicio' e 'fim' s�o diferentes
		if (s[inicio] != s[fim])
		{
			return FALSE;  //n�o � um pal�ndromo
		}
		else
		{
			return palindromoAux (s, inicio+1, fim-1);
		}
	}
	else
	{
		//caso base
		return TRUE;
	}
}
