#include <stdio.h>  //bibliotecas
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/* instru��es para o desafio
- Crie um programa em C++ que:
- Gera um n�mero aleat�rio entre 1 e 20 (inclusive);
- Imprime esse n�mero na tela;
- Se o n�mero for maior que 15, imprime "Acertou!", caso contr�rio imprime "Errou!";
- Toda a l�gica principal deve estar dentro de uma fun��o chamada verificarSorteio();
- O programa deve ser bem organizado e conter coment�rios�explicativos.*/


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
//inicio
srand(time(NULL));		//semente

printf("%i\n", (rand() % 21));		//gera um n�mero aleat�rio entre 1 e 20
if (rand() % 21 > 15)
	printf("Acertou miseravi!");	//mensagem caso o n�mero seja maior que 15
else 
	printf("N�o foi dessa vez!");	//mensagem caso o n�mero n�o seja maior que 15

return 0;

}

