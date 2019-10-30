#include <stdio.h>
#include <stdlib.h>

int multiplicar(int x,int y)
{
    return x*y;
}

int sumar(int x, int y)
{
    return x+y;
}

void funcion_principal(int x, int y, int (*funcion)(int, int))
{
    int res = funcion(x,y);
    printf("El resultado es %d\n", res);
}

int main()
{

    int num1;
    int num2;
    printf("Ingresa el primer numero: \n");
    scanf("%d",&num1);
    printf("Ingresa el segundo numero: \n");
    scanf("%d",&num2);

    printf("\nSuma:\n");
    funcion_principal(num1, num2, sumar);
    printf("Multiplicacion:\n");
    funcion_principal(num1, num2, multiplicar);

 	system("pause");
    return 0;

}
