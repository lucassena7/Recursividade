/********************************************************************************************

	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII
	
	Quest�o 04:
	Desenvolver uma fun��o recursiva que, dada uma string, exiba-a invertida.
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void exibirInvertido (char s[]);
void exibirInvertidoAux (char s[], int pos);

//fun��o main
void main ()
{
	exibirInvertido ("ALGORITMOS");
}
	
//implementa��o das fun��es
void exibirInvertido (char s[])
{
	//passando, inicialmente, a �ltima posi��o da string
	exibirInvertidoAux (s, strlen(s)-1);
}

void exibirInvertidoAux (char s[], int pos)
{
	//exibir� os caracteres at� a posi��o 0
	if (pos >= 0)
	{
		printf ("%c", s[pos]);			//printa o caracter atual
		exibirInvertidoAux (s, pos-1);	//chama a recurs�o para exibir os caracteres anteriores
	}
}
