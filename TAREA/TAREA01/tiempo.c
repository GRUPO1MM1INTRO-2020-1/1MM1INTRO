#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()
{
        printf("Reloj\n");
        struct tm*tm;
        char diahora[100];
        char h[100];
        char m[100];
        char s[100];
        time_t tiempoahora;
        tiempoahora=time(NULL);
        tm=localtime(&tiempoahora);
        strftime(diahora,100,"%d-%m",tm);
        printf("Fecha: %s\n",diahora);
        strftime(h,100,"%I:%M",tm);

        while(diahora==diahora)
        {
                tiempoahora=time(NULL);
                tm=localtime(&tiempoahora);
                strftime(h,100,"%I:%M",tm);
                printf("%s\n",h);
                strftime(m,100,"%M",tm);
                strftime(s,100,"%M",tm);
                if (m !=s)
                {
                        system("clear");
                        printf("Hora: %s\n",h);
                        strftime(m,100,"%M",tm);
                        Sleep(61000);

                }
        }
}
