/*
	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII

	Quest�o 06:
	Implementar uma fun��o recursiva que, dados uma string str e um caracter ch, remova 
	de str todas as ocorr�ncias de ch, retornando o total de remo��es realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int remover (char str[], char ch);
int removerAux (char str[], char ch, int pos);

void main ()
{
	//declara��o de vari�veis
	int quant;
	char s[30];
	char letra = 'O';				//caracter a ser removido da string
	
	//inicializando a string
	strcpy (s, "ALGORITMOS");
	
	//chamando a fun��o
	quant = remover (s, letra);		

	//exibindo o resultado
	printf ("\nForam realizadas %d remocoes do caracter %c.\nString apos a remocao: %s", quant, letra, s);
}

//implementa��o das fun��es
int remover (char str[], char ch)
{
	return removerAux (str, ch, 0);		//come�ando da posi��o 0
}

int removerAux (char str[], char ch, int pos)
{
	//declara��o de vari�veis
	int i;
	
	//caso base: terminou a string 'str'
	if (str[pos] == '\0')
	{
		return 0;
	}
	else
	{
		//verificando se o caracter foi encontrado
		if (str[pos] == ch)
		{
			//remover o caracter, atrav�s do deslocamento dos pr�ximos caracteres para a esquerda
			for (i=pos;i<strlen(str);i++)
			{
				str[i] = str[i+1];
			}
			
			return 1 + removerAux (str, ch, pos+1); //+1, pois foi feita mais uma altera��o
		}
		else
		{
			return removerAux (str, ch, pos+1);
		}
	}
}
