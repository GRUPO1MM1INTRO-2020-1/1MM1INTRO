#include <stdio.h>
#include <stdlib.h>
int main()
{
  char l;
  float r,w,g,p;
  printf("Registre los datos que se solicitan para conocer la altura y volumen de un pozo\n");
  printf("Radio:");
  scanf("%f",&r);
  printf("Presion hidrostatica en pascales:");
  scanf("%f",&p);
  printf("Indique la inicial del liquido que desea obtener el volumen (disel o agua):");
  scanf("%s",&l);
  w=p/9810;
  g=p/(9.81*820);
  (l=='a')?printf("Altura=%.2f",w):(l=='d')?printf("Altura=%.2f",g):printf("Nota:");
  (l=='a')?printf("Volumen=%.2f",(w*3.1416*r*r)):
  (l=='d')?printf("Volumen=%.2f",(g*3.1416*r*r)):
  printf("La letra para indicar el liquido debe ser a o d");
}
  
  

