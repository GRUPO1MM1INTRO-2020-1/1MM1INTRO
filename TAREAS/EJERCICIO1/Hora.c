#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int horas, minutos, seg,i;
    for(i=0;i<1000000;i++)
    {
	  time_t real;
	  time(&real);
	  struct tm *local = localtime(&real);
    horas = local->tm_hour;
    minutos = local->tm_min;
    seg = local->tm_sec;
        printf("%02d:%02d\n", horas, minutos);
		cambio(60);
		system("cls");
    }
	return 0;
}

void cambio(int nums)
{
    int milis = 1000 * nums;
    clock_t start_time = clock();
    while (clock() < start_time + milis);
}
