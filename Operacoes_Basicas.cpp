#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

float valor1, valor2, resultado;
char op;
int sqrt();
int pow();

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n*** Opera��es B�sicas ***\n");
	printf("\nLegenda: \n + Adi�ao;%20\n - Subtra��o;%20\n * Multiplica��o;%20\n / Divis�o;%20\n R Raiz;%20\n P Potencia��o.%20\n");
	printf("\n*Obs: Se quiser saber s� a Raiz, informe 0 no valor 2!*\n");

	printf("\nInforme o valor 1: \n");
	scanf("%f", &valor1);
	printf("\nInforme o valor 2: \n");
	scanf("%f", &valor2);
	printf("\nInforme a opera��o (+ | - | * | / | R | P | ): \n");
	op = getche();
	op = toupper(op);
	
	switch(op){
		case '+':
			resultado = valor1 + valor2;
			break;
		case '-':
			resultado = valor1 - valor2;
			break;
		case '*':
			resultado = valor1 * valor2;
			break;
		case '/':
			resultado = valor1 / valor2;
			break;
		case 'R':
			resultado = sqrt(valor1);
			break;
		case 'P':
			resultado = pow(valor1, valor2);
			break;	
	default:
		printf("\n Opera��o Inv�lida!\n");
	}
		
	
	printf("\n\nResultado: %.2f", resultado);
}
