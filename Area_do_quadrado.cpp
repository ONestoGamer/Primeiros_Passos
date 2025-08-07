/*algoritmo_calculando_área_do_quadrado
	declare
		int: lado, valor;		
	inicio
		leia (lado);
		valor <- (L)^2;
		escreva ("A área do quadrado é de", valor);
	fim
fim-algoritimo
*/

#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padrão

int lado, valor;

main(){
	setlocale(LC_ALL,"PORTUGUESE");
		
	printf("Digite o valor do lado do quadrado: ");
	scanf("%i", &lado);
	valor = (lado*lado);
	printf("A Área do quadrado é %i:", valor);
	
}
