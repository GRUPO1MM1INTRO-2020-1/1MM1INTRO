#include <stdio.h>
#include <math.h>
int main ()
{
    int x,y,a,b,res;
    printf("Ingrese valor x: ");
                    scanf("%i",&x);
    printf("Ingresa valor y: ");
                    scanf("%i",&y);
    printf("Ingrese valor a: ");
                    scanf("%i",&a);
    printf("Ingresa valor b: ");
                    scanf("%i",&b);
    res=(x+y)*(x+y)*(a-b);
    printf("Resultado: %i",res);
    return 0;
}
