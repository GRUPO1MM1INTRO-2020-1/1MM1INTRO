#include<stdio.h>

int main(){
	float pies,pulgadas,yardas,centimetros,metros;
	printf("Ingrese el valor en pies: ");
	scanf("%f", &pies);
	pulgadas=pies*12;
	yardas=pies/3;
	centimetros=pulgadas*2.54;
	metros=centimetros/100;
	printf("%.2f pies equivalen a %.2f pulgadas \n",pies,pulgadas); 
	printf("%.2f pies equivalen a %.2f yardas \n",pies,yardas); 
	printf("%.2f pies equivalen a %.2f centimetros \n",pies,centimetros); 
	printf("%.2f pies equivalen a %.2f metros \n",pies,metros);
	return 0;
}	


