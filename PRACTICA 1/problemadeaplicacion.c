#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.1416
#define gravedad 9.81
int di,sus;
int l(int sus);
int ej(int sus);
int agua(int sus);
int diesel(int sus);
int dena=1000, dend=820;
float A, v;
int p;


int main()
{
printf("TECLEE LA OPCION DE ACUERDO AL LIQUIDO CON EL QUE SE VA A TRABAJAR\n          1----------AGUA          2----------DIESEL\nSolo debe introducir cualquiera de esos dos numeros\n");
printf( "\n");
scanf( "%i", &sus);
(sus!=1&&sus!=2) ? l(sus) : ej(sus);
return 0;
}

int l(int sus)

{
    while (sus!=1&&sus!=2)
    {
    printf("IMGRESE UN VALOR VALIDO, RECUERDE:\n          1----------AGUA          2----------DIESEL\n\n ");
    scanf( "%i", &sus);
    }
    (sus!=1&&sus!=2) ? l(sus):ej(sus);
}


int ej(int sus)
{
        (sus=1)? agua(sus): diesel(sus);
}


int diesel(int sus)
{
printf("\nEl liquido es DIESEL\n");
    printf("\nINTRODUSCA EL VALOR DE LA PRESION HIDROESTATICA MOSTRADA POR EL SENSOR\n");

scanf("%d", &p);

    A=(p)/(dend*gravedad);

    printf("\n\nLa altura del liquido es %.2f", A);

    printf("\n\nIngrese el diametro en metros\n");
    scanf("%d", &di);

    v=pi*(pow(di/2,2))*A;

    printf("\n\nEl VOLUMEN del pozo es %.2f  m3", v);
}



int agua(int sus)
{
    printf("\n El liquido es AGUA\n \n");
    printf("INTRODUSCA EL VALOR DE LA PRESION HIDROESTATICA MOSTRADA POR EL SENSOR\n");
    scanf("%d", &p);
    A=p/(dena*gravedad);
    printf("\nLa altura del liquido es %.2f \n\n", A);
    printf("Ingrese el diametro en metros \n");
    scanf("%d", &di);
    v=pi*(pow(di/2,2))*A;
    printf("\n\nEl VOLUMEN del pozo es %.2f  m3", v);
}
