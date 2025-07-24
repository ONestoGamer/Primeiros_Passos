#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int num_pc, num_usr;        // variaveis para armazenar os numeros do usuario e os gerados pelo pc

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
        

	srand(time(NULL));          //semente
	//entrada de dados
	num_pc = (rand() % 11);           // rand com intervalo entre 0 e 10
	
	printf("**** Advinhação de Número ****\n\n");

	printf("Eu pensei em um número de 0 a 10 tente adivinhar, digite: ");
	scanf("%i", &num_usr);
	
	//processamento
	if (num_usr==num_pc)
	    printf("Párabéns, acertou de primeira!");
	else {
	    printf("Errou!! Tente novamente outro número de 0 a 10: ");    
	    scanf("%i", &num_usr);
	    if (num_pc==num_usr)
	        printf("Párabéns, você acertou na segunda tentativa!");
	    else {
	        printf("Errou novamente!! Tente uma ultima vez outro número de 0 a 10: ");    
	        scanf("%i", &num_usr);
	        if (num_pc==num_usr)
	        printf("Párabéns, você acertou na última tentativa, antes tarde do que nunca!");
	        else 
	            printf("ERROOOUUU... O número que eu pensei foi %i, GAME OVER!!", num_pc);
	    } 
	
	}
system("pause");
return 0;

}
