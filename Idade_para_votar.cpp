#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

int Id;			//variaveis de entrada

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe sua idade: ");
	scanf("%d", &Id);
	
	if (Id<=15)
		printf("\n\nN�o Vota!");
	else
		if (Id ==16 || Id ==17 || Id > 70)
		printf("\n\nVoto facultativo!\n");
	else
		printf("\n\nVoto obrigat�rio!\n");
		
	printf("\n\nO voto � um direito do cidad�o! Escolha bem nas pr�ximas elei��es!!!!\n\n\n\n");
}
