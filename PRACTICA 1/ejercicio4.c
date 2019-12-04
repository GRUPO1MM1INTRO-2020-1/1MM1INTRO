#include <stdio.h>
int con(int s);
int porfalso(int s);
int h, m, s;

int main()
{
printf( "Ingrese la cantidad de sugundos totales:" );
printf( "\n" );
scanf( "%i", &s );
(s>0&&s<=86400) ? con(s):porfalso(s);
}

int con(int s)
{
(s<60) ? printf( "Equivale a 0 horas 0 min. y %i seg.\n", s):(
    (m=s/60)&&
    (s=s%60)&&
((m<60) ? printf( "Equivale a 0 horas %i min. y %i seg.\n", m,s):
    (
    (h=m/60)&&
    (m=m%60)&&
    (printf( "Equivale a %i horas %i min. y %i seg.\n", h, m,s ))
)
)
    );
}

int porfalso(int s)

{
    while (s<0&&s>86400);
    {
    printf("Ingrese nuevamente el numero de segundos totales\n");
    scanf( "%i", &s );
    }
    (s>0&&s<=86400) ? con(s):porfalso(s);
}
