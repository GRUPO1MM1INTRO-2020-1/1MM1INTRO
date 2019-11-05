#include<time.h>
#include<stdio.h>
#include<windows.h>

int main(int argc, char*argv[]){
        int m=0;
        do{
        time_t timeact;
        time(&timeact);
        struct tm *hora = localtime(&timeact);
        printf("\nLa hora es   %d:%d\n", hora->tm_hour, hora->tm_min);
        Sleep(60000);
        m++; //contador
        }
        while (m<=60);
}


