/*Fa�a um algoritmo que: 
i) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s);
ii) Obtenha o valor para a vari�vel VH (valor hora trabalhada): 
iii) Obtenha o valor para a vari�vel PD (percentual de desconto);
iv) Calcule o sal�rio bruto: SB = HT * VH; 
v) Calcule o total de desconto:TD = (PD/100)*SB; 
vi) Calcule o sal�rio l�quido: SL = SB � TD; 
vii) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio Liquido
*/

#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padr�o

float HT, VH, PD;			//variaveis de entrada
float SB, SL, TD;			//variaveis de processamento e saida

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	//entrada de dados
	printf ("Informe a quantidade de horas trabalhadas no m�s: ");
	scanf ("%f", &HT);
	printf ("Informe o valor por hora trabalhada ($): ");
	scanf ("%f", &VH);
	printf ("Informe o percentual de desconto (%): ");
	scanf ("%f", &PD);
	//processamento - calculos dos valores
	SB = HT*VH; 
	TD = SB*(PD/100);
	SL = SB-TD;
	//saida
	printf("\n\n***Relatorio Geral***\n\n");
	printf("\n Horas Trabalhadas: \t%10.2f", HT);
	printf("\n Sal�rio Bruto: \t%10.2f", SB);
	printf("\n Valor do Desconto: \t%10.2f", TD);
	printf("\n Sal�rio L�quido:  \t%10.2f", SL);
}
