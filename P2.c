#include <stdio.h>
int main()
{
  float pies;
  float ft,y,cm,m;
  printf("programa que entrega el equivalente de pies en: pulgadas, yardas, centimetros y metros\n");
  printf("Pies=");
  scanf("%f",&pies);
  ft=12*pies;
  y=pies/3;
  cm=12*2.54*pies;
  m=(12*2.54*pies)/100;
  printf("Pulgadas=%.2f",ft);
  printf("\nYardas=%.2f",y);
  printf("\nCentimetros=%.2f",cm);
  printf("\nMetros=%.2f",m);
}
