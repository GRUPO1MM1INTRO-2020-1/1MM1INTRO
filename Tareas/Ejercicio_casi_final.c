#include <stdio.h>
#include <stdlib.h>

int f(int x, int y);
int main()
{
    int x,y;
    printf("Este programa devuelve un entero segun ciertas restricciones a una funcion en la que se le ingresan dos valores\n");
    printf("Uno es para a y otro para b\n");
    printf("Estos numeros deben de ser enteros y positivos\n");
    printf("Ingrese un valor para a\n");
    scanf("%i",&x);
    printf("ingrese un valor para b\n");
    scanf("%i",&y);
    f(x,y);
return 0;
}
