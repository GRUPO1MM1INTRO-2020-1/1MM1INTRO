/*
Alumna: Flores Negrete Azereth
1MM1
Apuntador a funcion
*/
#include<stdio.h>
#include<stdlib.h>

 
int sumar(int a, int b)
{
    return a+b;
}
 
int restar(int a, int b)
{
    return a-b;
}
 
void funcion_principal(int a, int b, int (*funcion)(int, int))
{
    int resultado = funcion(a,b);
    printf("El resultado es %d\n", resultado);
}
 
int main()
{
    //Se definen dos valores enteros cualesquiera
    int num1;
    int num2;
    printf("Ingresa el valor 1: \n");
     scanf("%d",&num1);
     printf("Ingresa el valor 2: \n");
     scanf("%d",&num2);
 
    //Se invoca la funcion principal, pasandole la funcion de SUMA
    printf("\nSuma:\n");
    funcion_principal(num1, num2, sumar);
 
    //Se invoca la funcion principal, pasandole la funcion de RESTA
    printf("Resta:\n");
    funcion_principal(num1, num2, restar);
 
 	system("pause");
    return 0;
    
}