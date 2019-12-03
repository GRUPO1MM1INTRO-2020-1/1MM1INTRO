#include <stdio.h>
#include <stdlib.h>
int main()
{
  char m;
  float t;
  printf("Valor de grados que desea convertir entre °C y °F\n");
  scanf("%f%s",&t,&m);
  (m=='C')?printf("%.1f°F",(t*9/5+32)):
  (m=='F')?printf("%.1f°C",((t-32)/1.8)):
  printf("Solo acepta valores en C o F");
}
  
