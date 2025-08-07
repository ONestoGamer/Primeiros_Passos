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
	printf("\n*** Operações Básicas ***\n");
	printf("\nLegenda: \n + Adiçao;%20\n - Subtração;%20\n * Multiplicação;%20\n / Divisão;%20\n R Raiz;%20\n P Potenciação.%20\n");
	printf("\n*Obs: Se quiser saber só a Raiz, informe 0 no valor 2!*\n");

	printf("\nInforme o valor 1: \n");
	scanf("%f", &valor1);
	printf("\nInforme o valor 2: \n");
	scanf("%f", &valor2);
	printf("\nInforme a operação (+ | - | * | / | R | P | ): \n");
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
		printf("\n Operação Inválida!\n");
	}
		
	
	printf("\n\nResultado: %.2f", resultado);
}
