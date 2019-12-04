#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
 int main() 
{ 
int r, h; 
float a, v, g; 
float pi=3.1416;
printf("TECLEE EL RADIO DE LA BASE\n"); 
scanf("%i", &r); 
(r>=0)?(r=r):((r=-r)&&printf("LA MAGNITUD INGRESADA ES NEGATIVA\nSE TOMARA SU VALOR ABSOLUTO PARA REALIZAR EL CALCULO\n"));
printf("Ingrese la altura\n");
scanf("%i", &h);
(h>=0)?(h=h):((h=-h)&&printf("LA MAGNITUD INGRESADA ES NEGATIVA\nSE TOMARA SU VALOR ABSOLUTO PARA REALIZAR EL CALCULO\n"));
g=sqrt(pow(h,2)+pow(r,2)); 
a=((2)*(pi)*(r)*(g/2))+ pi*(pow(r,2)); 
v=((pi)*(pow(r,2))*(h))/3; 
printf("\n El area es: %.2f", a);
 printf("\n El volumen es: %.2f", v);
 }
