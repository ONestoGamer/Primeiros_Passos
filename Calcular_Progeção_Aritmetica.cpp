#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

int a1, r, an, sn, n;

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe o valor do primeiro elemento da PA (a1): ");
	scanf("%i", &a1);
	printf("Informe o n�mero de termos da PA (n): ");
	scanf("%i", &n);
	printf("Informe a raz�o da PA (r): ");
	scanf("%i", &r);
	
	an = a1+(n-1)*r; 
	sn = ((a1+an)*n)/2;
	
	printf("O resultado da progress�o � %i", sn);
								
}
