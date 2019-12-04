#include<stdio.h>
#include<stdlib.h>
int celcius(float valor,float celsius);
int faren(float valor,float farenheit);
float valor,celsius,farenheit;
int l;
int porfalso(int l);
int temp(int l, float valor);

int celcius(float valor,float celsius)
{
celsius=valor-32;
celsius=celsius/1.8;
printf("El valor en Celsius es:%.2f\n",celsius);
}

int faren(float valor,float farenheit)//c
{
    farenheit=9*valor;
    farenheit=farenheit/5;
    farenheit=farenheit+32;
    printf("El valor en Farenheit es:%.2f\n",farenheit);

}

int temp(int l, float valor)
{
 	(l=1)?(printf("Ingrese la temperatura en grados faremheit \n")):(printf("Ingrese la temperatura en grados celcius\n"));
    scanf("%f",&valor);
    (l=1) ?  celcius(valor,celsius): faren(valor,farenheit);
    return 0;
}

int main ()
{
    printf("Teclee la escala a que desee convertir\n 1----------Celcius          2----------Farenheit\n");
    scanf("%i",&l);
    ((l!=1)&&(l!=2))?(porfalso(l)):(temp(l,valor));
    return 0;

}

int porfalso(int l)

{
    while ((l!=1)&&(l!=2))
    {
    printf("Ingrese nuevamente la escala a que desee convertir\n 1----------Celcius          2----------Farenheit\n");
    scanf( "%i", &l );
    }
    ((l!=1)&&(l!=2))?(porfalso(l)):(temp(l,valor));
}
