#include <stdio.h>

#include <time.h>


#include <windows.h>



int main()

{

while (1){

time_t tiempo = time(NULL);

struct tm *hora = localtime(&tiempo);

char output[10];

strftime(output,10,"%H:%M:%S",hora);

printf("La hora actual es: %s \n",output);

Sleep(60000);



}

return 0;

}



    
