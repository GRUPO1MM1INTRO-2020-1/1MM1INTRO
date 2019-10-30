#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main (int argc,char argv[])
{
int A=1;
time_t tiempoahora;
time(&tiempoahora);
struct tm *mitiempo=localtime(&tiempoahora);
printf("La hora inicial es= %d:%.2d:%.2d\n",mitiempo->tm_hour,mitiempo->tm_min,mitiempo->tm_sec);
Sleep(60000);
do
{
        time_t tiempoahora;
        time(&tiempoahora);
        struct tm *mitiempo=localtime(&tiempoahora);
        printf("La hora despues de 1 minuto es= %d:%.2d\n",mitiempo->tm_hour,mitiempo->tm_min);
        Sleep(60000);
}
while (A=1);
return 0;
}
