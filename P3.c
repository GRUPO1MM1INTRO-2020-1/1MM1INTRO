#include <stdio.h>
#include <math.h>
int main()
{
float r,h,a,v;
float pi=3.1416;
  printf("Programa que saca el area y volumen de un cono a partir de su radio y altura.\nRadio=");
  scanf("%f",&r);
  printf("Altura=");
  scanf("%f",&h);
  a=2*pi*r*sqrt(r*r+h*h)/2+pi*r*r;
  v=pi*r*r*h/3;
  printf("Area=%.2f",a);
  printf("\nVolumen=%.2f",v);
}
