/*algoritmo_calculando_�rea_do_triangulo
	declare
		int: base, altura, valor;
	inicio
		leia (base, altura);
		valor <- (B*A)/2;
		escreva ("A �rea do triangulo de base", base, "e altura", altura, "� de",valor);
	fim
fim-algoritimo
*/

#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

int base, altura, valor;

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Digite o valor da base: ");
	scanf ("%i", &base);
	printf("Digite o valor da altura: ");
	scanf ("%i", &altura);
	valor = (base*altura/2);
	printf ("A �rea do triangulo �: %i",valor);
	
}
