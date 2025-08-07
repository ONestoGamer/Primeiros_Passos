#include <stdio.h>  //bibliotecas
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/* instruções para o desafio
- Crie um programa em C++ que:
- Gera um número aleatório entre 1 e 20 (inclusive);
- Imprime esse número na tela;
- Se o número for maior que 15, imprime "Acertou!", caso contrário imprime "Errou!";
- Toda a lógica principal deve estar dentro de uma função chamada verificarSorteio();
- O programa deve ser bem organizado e conter comentários explicativos.*/


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
//inicio
srand(time(NULL));		//semente

printf("%i\n", (rand() % 21));		//gera um número aleatório entre 1 e 20
if (rand() % 21 > 15)
	printf("Acertou miseravi!");	//mensagem caso o número seja maior que 15
else 
	printf("Não foi dessa vez!");	//mensagem caso o número não seja maior que 15

return 0;

}

