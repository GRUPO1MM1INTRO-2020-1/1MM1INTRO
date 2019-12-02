#include<stdio.h>
#include<stdlib.h>

float yardas, pies, pulgadas, centimetros, metros;

main()
{
	printf("IngresE el valor que desea convertir (pies):");
	scanf("%f", &pies);
	yardas=pies/3;
	pulgadas=pies*12;
	centimetros=pulgadas*2.54;
	metros=centimetros/100;
	printf("Yardas= %.2f\nPulgadas= %.2f\nCentimetros=%.2f\nMetros=%.2f\n",yardas,pulgadas,centimetros,metros);
	
	return 0;

}
