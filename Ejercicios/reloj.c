/*
Alumna: Flores Negrete Azereth
1MM1
Apuntador a funcion
*/
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
	int hours, minutes, seconds;



    for(i=0;i<1000000;i++)
    {


	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
    hours = local->tm_hour;
    minutes = local->tm_min;
    seconds = local->tm_sec;
     printf("****************************************************\n");
        printf("*                                                  *\n");
        printf("*                      %02d:%02d                       *\n", hours, minutes);
        printf("*                                                  *\n");
        printf("****************************************************\n");


		delay(60);
		system("cls");
    }
	return 0;
}
