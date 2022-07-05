/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 23/10/2021 (aula extra)
	
	Desenvolver uma fun��o recursiva que retorne a quantidade de ocorr�ncias de um n�mero 
	em um vetor de inteiros.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int numOcorrencias (int numero, int vetor[], int quant, int pos);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int vet[10] = {1,8,1,2,6,4,1,3,6,1};
	int cont, numero = 1;
	
	//chamando a fun��o
	cont = numOcorrencias (numero, vet, 10, 0);		//iniciando a busca na posi��o 0 [como � feito com o for na vers�o iterativa, come�ando o i na posi��o 0]
	
	//exibindo o resultado
	printf ("Foram encontradas %d ocorrencias do numero %d no vetor.", cont, numero);
}

//implementa��o
int numOcorrencias (int numero, int vetor[], int quant, int pos)
{
	if (pos < quant)  //verificando se � uma posi��o v�lida do vetor
	{
		if (vetor[pos] == numero)	//verificando se o elemento foi encontrado na posi��o 'pos'
		{
			return 1 + numOcorrencias (numero, vetor, quant, pos+1); //caso seja encontrado, acumular 1 na soma para o c�lculo do n�mero de ocorr�ncias e seguir para a busca nas demais posi��es do vetor
		}
		else
		{
			return /*0 +*/ numOcorrencias (numero, vetor, quant, pos+1); //se 'numero' n�o for encontrado na posi��o 'pos', segue-se para a busca nas demais posi��es do vetor
		}		
	}
	else		//caso base
	{
		return 0;	//"zerando o contador", considerando que chegou-se ao caso base no qual n�o h� mais posi��es a verificar
	}
}

/*
vetor: 4 2 4 1			numero: 4

		1� chamada: pos 0 (vetor[pos] = 4)
			
				1 + 2� chamada
					pos 1 (vetor[pos] = 2)
						0 + 3� chamada
							pos 2 (vetor[pos] = 4)
							    1 + 4� chamada
									pos 3 (vetor[pos] = 1) 
									    0 + 5� chamada
									        pos 4 ==> caso base!!!
									                  retorna 0									                  
*/
