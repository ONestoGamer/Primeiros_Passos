/*algoritmo_calculando_�rea_do_quadrado
	declare
		int: lado, valor;		
	inicio
		leia (lado);
		valor <- (L)^2;
		escreva ("A �rea do quadrado � de", valor);
	fim
fim-algoritimo
*/

#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

int lado, valor;

main(){
	setlocale(LC_ALL,"PORTUGUESE");
		
	printf("Digite o valor do lado do quadrado: ");
	scanf("%i", &lado);
	valor = (lado*lado);
	printf("A �rea do quadrado � %i:", valor);
	
}
