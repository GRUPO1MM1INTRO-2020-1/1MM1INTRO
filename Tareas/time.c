#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
struct tm *hora;
time_t si;

   while (1)
{
   time(&si);
   hora = localtime(&si);
   printf("Hora actual : %d:%.2d\n", hora->tm_hour, hora->tm_min);
   fflush(stdout);
   system("clear");
}
    return 0;
}
