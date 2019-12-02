#include <stdio.h>
#include <math.h>

int main()
{
	float r, h, g, A, V;
	const float pi=3.1416;
	printf("Ingresa el valor del radio de la base:\n\t");
	scanf("%f",&r);
	printf("Ingresa el valor de la altura del cono:\n\t");
	scanf("%f",&h);
	g=sqrt(r*r+h*h);
	V=(pi*r*r*h)/3;
	A=((2*pi*r*g)/2)+pi*r*r;
	
	printf("Area Total del Cono:\n\t%.2f\n",A);
	printf("Volumen del Cono:\n\t%.2f\n",V);
	return 0;
}
