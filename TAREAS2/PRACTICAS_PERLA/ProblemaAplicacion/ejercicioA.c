#include <stdio.h>
#include <stdlib.h>

int main()
{
  char l;
  float r, P, p, D;
  const float pi=3.1416;
  printf("Ingre se el valor de la presion hidrostática (bar):\n\t");
  scanf("%f",&p);
  printf("Ingrese a, si el tanque contiene agua o d, si contiene diesel:\n\t");
  scanf("%s",&l);
  printf("Ingrese el diametro del tanque (m):\n\t");
  scanf("%f",&D);
  r=D/2;/*obtener el radio*/
  P=p*100000;/*convertir de bar a pascales*/
  (l=='a')?printf("Volumen=\t%.1f m^3\n",pi*r*r*P/(1000*9.81)):(l=='d')?printf("Volumen=\t%.1f m^3\n",pi*r*r*P/(820*9.81)):printf("Entrada no valida"); 
 
  return 0;
  }/*end main()*/

