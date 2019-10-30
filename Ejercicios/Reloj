#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}



int main(void)
{
    long t;
	int hours, minutes, seconds;
    for(t=0;t<1000000;t++)
    {
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
    hours = local->tm_hour;
    minutes = local->tm_min;
    seconds = local->tm_sec;
    printf("*%02d:%02d", hours, minutes);
    delay(60);
    system("cls");
    }
	return 0;
}
