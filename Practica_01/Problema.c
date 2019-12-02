#include<stdio.h>
#include<stdlib.h>

int main (){
	float d,A,P,ha,hd,Va,Vd;
	char tipo;
	const float pi=3.1416, pa=1000, pd=820, g=9.81;
	printf("Calculador del volumen de agua o disel en pozo en base a su presión hidrostática y su diametro\n");
	printf("Ingrese el valor del diámetro en metros: ");
	scanf("%f", &d);
	printf("Ingrese el valor de la presión hidrostática en Bar del agua (a) o disel (d) (ejemplo 2a o 2d): \n");
	scanf("%f %s", &P,&tipo);
		A=pi*(d*d)/4;
		ha=(P*100000)/(pa*g);
		hd=(P*100000)/(pd*g);
		Va=A*ha;
		Vd=A*hd;
	(tipo=='a')?printf("La altura del agua en el pozo es de: %.2f m \nEl volumen del agua es de: %.2f m^3 \n", ha, Va):
	(tipo=='d')?printf("La altura del disel en el pozo es de: %.2f m \nEl volumen del disel es de: %.2f m^3 \n", hd, Vd):printf("Entrada no valida, por favor ingrese un valor valido");
	return 0;
}
