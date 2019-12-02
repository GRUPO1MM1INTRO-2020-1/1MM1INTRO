#include <stdio.h>
#include <stdlib.h>

int main()
{
  char letra;
  float grados, resultado;
  printf("Ingrse el valor que desea convertir (ejemplo: 25f o 16c)= \n");
  scanf("%f%s",&grados,&letra);
 
  (letra=='c')?printf("\t%.1f °F\n",grados*9/5+32):(letra=='f')?printf("\t%.1f °C",(grados-32)/1.8):printf("Entrada no valida");
  
  return 0;
}/*end main()*/

