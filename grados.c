#include<stdio.h>
#include<stdlib.h>

int main(){
	char tipo;
	float grados,C,F;
	printf("Convertidor de °C a °F y de °F a °C\n");
	printf("Ingrese el valor de grados que desea convertir (ejemplo 15c o 20f): \n");
	scanf("%f %s", &grados,&tipo);
	C=grados*9/5+32;
	F=(grados-32)/1.8;

	(tipo=='c')?printf("%.2f °C equivalen a %.2f °F\n", grados, C):
		(tipo=='f')?printf("%.2f °F equivalen a %.2f °C", grados, F):
		printf("Entrada no valida, por favor ingrese un valor valido");
	return 0;
}

