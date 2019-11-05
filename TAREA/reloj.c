#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)

{
    struct tm *hora;
    time_t ahora;

    while (1)
    {
            time(&ahora);
        hora = localtime(&ahora);
        printf("hora actual es: %d:%.2d\n", hora->tm_hour, hora->tm_min);
        fflush(stdout);
        system ("clear");
     }
    return EXIT_SUCCESS;
}
