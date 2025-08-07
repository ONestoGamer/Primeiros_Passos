#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padrão

int Id;			//variaveis de entrada

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe sua idade: ");
	scanf("%d", &Id);
	
	if (Id<=15)
		printf("\n\nNão Vota!");
	else
		if (Id ==16 || Id ==17 || Id > 70)
		printf("\n\nVoto facultativo!\n");
	else
		printf("\n\nVoto obrigatório!\n");
		
	printf("\n\nO voto é um direito do cidadão! Escolha bem nas próximas eleições!!!!\n\n\n\n");
}
