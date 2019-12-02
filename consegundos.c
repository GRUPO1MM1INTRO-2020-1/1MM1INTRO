#include <limits.h>
#include <stdio.h>

/** El dato de entrada debe ser menor o igual que 86400 */
int main(int argc,char *argv[])
{
  int S;
  printf("Segundos totales: ");
  scanf("%d",&S);
  (!(S/60))?printf("Horas:%s Minutos:%s Segundos:%.2d\n","00","00",S):
((S/60)<60)?printf("Horas:%s Minutos:%.2d Segundos:%.2d\n","00",S/60,S%60):
printf("Horas:%.2d Minutos:%.2d Segundos:%.2d\n",S/3600,(S%3600)/60,(S%3600)%60);
  
  return 0;
}/*end main()*/

