#include <stdio.h>
#include <stdlib.h>
#define Segundos 10000
int main()
{
    int numero1, numero2, mcd, residuo;
    char tecla;
 printf("Digite los numeros para calcular el maximo comun divisor \n");
 printf("Numero1: \n");
 scanf("%d", &numero1);
 printf("Numero2: \n");
 scanf("%d", &numero2);
 do{
    residuo=numero1 % numero2;
    if (residuo != 0)
    {
        numero1=numero2;
        numero2=residuo;

    }
    else{
        mcd=numero2;
    }
 } while(residuo !=0);
 printf("El MCD es: %d\n",mcd);

    return 0;
}
