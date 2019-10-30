#include <stdio.h>
#include <stdlib.h>
/* LARA SOTO ISAAC 1MM1 */
/*En este programa se hacen uso de apuntadores*/

float (*f)(float,float,float); /*Se trata de un apuntador a una funcion que resive tres enteros y devuelve un apuntador a entero*/
float (*g)(float,float,float,float); /*Es lo mismo que f soloq ue resive cuatro enteros*/
void funcion(float (*)(float,float,float), float, float, float); /*'funcion' va a recibir un apuntador a una funcion 'int(*)(int,int)' como puede serlo f o g y va a alimentar a los mismos con tres enteros*/
void Sfuncion(float (*)(float,float,float,float),float, float, float, float);
float co(float,float,float); /*Se trata de una funcion que resive tres enteros y devuelve un entero*/
float vo(float,float,float,float); /*Lo mismo que 'mcd' solo que este recive cuatro enteros y devuelve un entero*/
float no(float,float,float); /*lo mismo que co*/
static float E,G;
int main()
{
        float A,B,C;
        printf("\nEste programa toma tres valores:\n");
        printf("El primero es el valor de Concentracion Molar de una sustancia A\n");
        printf("El segundo es el valor del Volumen de la sustancia en Litros de A\n");
        printf("El tercero es el valor del volumen de una sustancia en Litros de B\n");
        printf("El programa encuentra la Concentracion molar de la sustancia B\n");

        printf("\nIngresa la Concentracion de A: ");
        scanf("%f",&A);
        printf("\nIngresa el Volumen de A [Litros]: ");
        scanf("%f",&B);
        printf("\nIngresa el Volumen de B [Litros]: ");
        scanf("%f",&C);

        f = co; /*Se puede escribir con o sin el '&'*/
        funcion(f,A,B,C); /*En este caso funcion se esta alimentando con el apuntador a una
                            funcion que en este caso es f, y a lo que sea que apunte f
                            (En este caso a mcd) lo va a alimentar con 2 valores, en este caso A y B en ese orden*/
        printf("\nLa Concentracion de la sustancia B: %f",E);

        /*Como forma didactica, (Pues no cumple ninguna funcion en especial) se van a realizar la siguiente operacion*/
        /* ((A*B)-C)/B */
        f = no;
        funcion(f,A,B,C);
        printf("\n El resultado a la operacion  ((dato1*dato2)-dato3)/dato2 es: %f",E);

        g = &vo;
        Sfuncion(g,A,E,B,C);
        printf("\n\nAcontinuacion se suman las concentraciones y ");
        printf("se dividen entre el volumen total\n");
        printf("Dando como resultado: %f",G);
        printf("\n\n");

return 0;
}

/***********************************************************/
        float co(float M,float N,float O)
        {
        float L=((M*N)/O);
        return L;
        }
/***********************************************************/
        float vo(float M,float N,float O,float P)
        {
        float H=((M+N)/(O+P));
        return H;
        }
/***********************************************************/
        float no(float M,float N,float O)
        {
        float I=((M*N)-O)/N ;
        return I;
        }
/***********************************************************/
        void funcion(float (*f)(float,float,float),float P, float Q, float R)
        {
        E=(*f)(P,Q,R);
        }
/***********************************************************/
        void Sfuncion(float (*g)(float,float,float,float),float P, float Q, float R, float S)
        {
        G=(*g)(P,Q,R,S);
        }
/***********************************************************/
