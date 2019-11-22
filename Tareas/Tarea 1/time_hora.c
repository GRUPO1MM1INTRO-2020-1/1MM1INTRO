//Romero Camacho Ares Tristan//
#include <stdio.h>
#include <time.h>
#include <string.h>

int x;
int main()
{
        time_t t;
        struct tm *tm;
        char hora[100];
        char hora2[100];
        char fecha[100];
        t = time(NULL);
        tm = localtime(&t);
        strftime(hora, 100,"%I:%M",tm);
        strftime(hora2, 100,"%I:%M",tm);
        strftime(fecha, 100,"%d/%m/%y",tm);

        printf("La fecha de hoy es: %s\n", fecha);
        printf("La hora es: %s\n", hora);
uno:
        x= strcmp(hora,hora2);
        if (x==0){
        t = time(NULL);
        tm = localtime(&t);
        strftime(hora, 100,"%I:%M",tm);
        goto uno;
        }
        t = time(NULL);
        tm = localtime(&t);
        strftime(hora2, 100,"%I:%M",tm);
        printf("La hora atual es: %s\n", hora);
        goto uno;
}
