#include<stdio.h>
#include<math.h> 

int main(){
  float r,h,g,A,V;
  const float pi=3.1416;
  printf("Calculo del Área y Volumen de un cono en base a su radio y altura\n");
  printf("Ingrese el valor del radio: ");
  scanf("%f", &r);
  printf("Ingrese el valor de la altura: ");
  scanf("%f", &h);
  	g= sqrt((r*r)+(h*h));
 	V=(pi*(r*r)*h)/3;
	A=((2*pi*r*g)/2)+pi*(r*r);
  printf("El Area del cono es: %.2f \n", A);
  printf("El Volumen del cono es: %.2f \n", V);
  return 0;
}

