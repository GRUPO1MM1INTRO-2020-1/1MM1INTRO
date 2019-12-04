#include <stdio.h>
int main()
{
    float x,yar,pulg,cm,m;
        printf("BIENVENIDO\n");
        printf("INGRESE MAGNITUD A CONVERTIR EN PIES\n");
        scanf("%f",&x);
        (x>=0)?(x=x):((x=-x)&&printf("LA MAGNITUD INGRESADA ES NEGATIVA\nSE TOMARA SU VALOR ABSOLUTO PARA REALIZAR EL CALCULO\n"));
    pulg=x*12;
    yar=x*.3;
    cm=pulg*2.54;
    m=cm/100;
        printf("La conversion de pies a yardas es: %.0f\n",yar );
        printf("La conversion de pies a pulgadas es: %.0f\n",pulg );
        printf("La conversion de pies a centimetros es: %.2f\n",cm );
        printf("La conversion de pies a metros es: %.2f\n",m );
    return 0;
}
