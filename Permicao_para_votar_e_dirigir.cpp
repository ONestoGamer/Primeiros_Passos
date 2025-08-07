#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
					 
int ano_atual, ano_nascimento, resultado;
					 
main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf(" Informe o ano atual: ");
	scanf("%i", &ano_atual);
	printf(" Informe o ano do seu nascimento: ");
	scanf("%i", &ano_nascimento);
	resultado = ano_atual - ano_nascimento;
	printf(" Sua idade é %i anos.", resultado);
	if (resultado ==16 || resultado ==17){
		printf("\n Você está apto apenas para Votar");
	}
	if (resultado >=18){
		printf("\n Você está apto para Votar e Dirigir!");	
	}
	if (resultado <16){
		printf("\n Você não pode votar nem dirigir!");
	}
}

