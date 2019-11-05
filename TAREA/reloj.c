#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}
int main(void)
{
    long i;
	int hora, minutos, segundos;



    for(i=0;i<10000000000;i++)
    {
        //system('pause');
      // system("cls");
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
    hora = local->tm_hour;
    minutos = local->tm_min;
    segundos = local->tm_sec;
    if (hora< 12)
		printf("La hora es: %02d:%02d am\n", hora, minutos);

	else
		printf("La hora es: %02d:%02d pm\n", hora - 12, minutos);

	// print current date


		delay(60);
    }
	return 0;
}
