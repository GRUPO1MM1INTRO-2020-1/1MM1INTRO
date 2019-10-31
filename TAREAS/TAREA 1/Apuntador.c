#include<stdio.h>
#include<stdlib.h>
#include <math.h>
double P,N,resultado;

double raizp(double a)
{
	P=sqrt(a);
    return P ;
}

double raizn (double a)
{
	N=-sqrt(a);
    return N ;
}


void general (double a, double (*funcion)(double))
{
    double resultado = funcion(a);
    printf("%f\n", resultado);
}

int main()
{

    int A;
    printf("Ingresa el valor del que desee obtener su raiz cuadrada\n");
    scanf("%d",&A);

    printf("LA RAIZ NUMERO 1 ES:\n");
    general(A,raizn);

    printf("LA RAIZ NUMERO 2 ES:\n");
    general(A,raizp);

    return 0;
}
