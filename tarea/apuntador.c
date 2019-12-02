#include <math.h>
#include<stdio.h>
#include<stdlib.h>

double positivo,negativo,result;

double raizp(double a)
{
	positivo=sqrt(a);
    return positivo ;
}

double raizn (double a)
{
	negativo=-sqrt(a);
    return negativo ;
}


void general (double a, double (*funcion)(double))
{
    double result = funcion(a);
    printf("%f\n", result);
}

int main()
{

    int A;
    printf("Ingresa el numero del que desee obtener su raiz cuadrada\n");
    scanf("%d",&A);

    printf("LA RAIZ NUMERO 1 ES:\n");
    general(A,raizn);

    printf("LA RAIZ NUMERO 2 ES:\n");
    general(A,raizp);

    return 0;
}
