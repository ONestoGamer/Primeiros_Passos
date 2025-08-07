/*algoritmo_IMC
	declare
		real: peso, altura, IMC;
	inicio
		escreva ("Seu Peso em Kg");
		leia (peso);
		Escreva ("Sua Altura em Metros");
		leia (altura);
		IMC <- peso/altura^2;
		Se (IMC <17) ent�o	
		escreva ("Voc� est� Muito abaixo do peso!");
		fim-se
		Se (IMC>=17 E IMC<=18,49) ent�o
		escreva ("Voc� est� Abaixo do peso!");
		fim-se
		Se (IMC>=18,5 E IMC<=24,99) ent�o
		escreva ("Voc� est� com o Peso normal.");
		fim-se
		Se (IMC>=25 E IMC<=29,99) ent�o
		escreva ("Voc� est� Acima do Peso!"); 
		fim-se
		Se (IMC>=30 E IMC<=34,99) ent�o
		escreva (Voc� est� com Obesidade Nivel I!");
		fim-se
		Se (IMC>=35 E IMC<=39,99) ent�o
		escreva ("Voc� est� com Obesidade Nivel II!");
		fim-se
		Se (IMC>=40) ent�o
		escreva ("Voc� est� com Obesidade Morbida"!);
		fim-se
	fim
fim-algoritimo
*/

#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

float p, al, IMC;			//variaveis de entrada e saida
			
main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe o seu peso em Kg: ");
	scanf("%f", &p);
	printf("Informe a sua altura em metros: ");
	scanf("%f", &al);
	IMC = p/(al*al);
	printf("Seu IMC � de: %.2f\n", IMC);
	if (IMC<17) 
		printf("Voc� est� muito abaixo do peso! Bora Comer!");
	else
		if (IMC==17 || IMC<=18.49)
			printf("Voc� est� abaixo do peso! Aten��o!");
		else
			if (IMC==18.5 || IMC<=24.99)
				printf("Voc� est� com peso normal! Parab�ns!");
			else
				if (IMC==25 || IMC<=29.99)
					printf("Voc� est� acima do peso! Aten��o!");
				else
					if (IMC==30 || IMC<=34.99)
						printf("Voc� est� com Obesidade Nivel I! Aten��o, cuide-se!");
					else
						if (IMC==35 || IMC<=39.99)
							printf("Voc� est� com Obesidade Nivel II! Muito Cuidado!");
						else
							if (IMC>=40)
								printf("Voc� est� com Obesidade Morbida! Ultrapassou todos os limites!");
	
}
	
	
	
	
