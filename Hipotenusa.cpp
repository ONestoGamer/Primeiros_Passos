#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
	
int x, y, z, ang1, ang2, ang3, h;

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	x = 15;
	y = 12;
	z = 9;
	ang1 = 90;
	ang2 = 60;
	ang3 = 30;
	
	if ((x<y+z) || (y<x+z) || (z<x+y)){
	
		printf("As medidas digitadas formam um triangulo.\n");
		if ((x==y) && (x==z) && (z==y)){
			printf("O triangulo � equilatero!\n");
		}else
			if ((x==y) || (x==z) || (y==z)){
				printf("O trinangulo � is�sceles!\n");
				}else
					printf("O triangulo � escaleno!\n");
	}	else
		printf("As medidas digitadas n�o formam um triangulo.\n");				
	if ((ang1+ang2+ang3) >180)
		printf("Erro: Soma dos �ngulos do triangulo � maior que 180 graus.\n");
	else
		if ((ang1==90) || (ang2==90) || (ang3==90)){
			printf("O triangulo � retangulo.\n");
			if ((x>y) && (x>z))
			h = sqrt(y*y+z*z);
			if ((y>x) && (y>z))
			h = sqrt(x*x+z*z);
			if ((z>x) && (z>y))
			h = sqrt(x*x+y*y);
			printf("A hipotenusa � %i", h);
		}else	
			printf("O triangulo n�o � retangulo, poortanto n�o existe hipotenusa.\n");		
}
