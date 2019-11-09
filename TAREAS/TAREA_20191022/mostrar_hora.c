//Mostrar_hora.c
//Jesus Alejandro Martinez Rios
#include <stdio.h>
#include <time.h>
#include <assert.h>
int main(){
        int M,N,x,y=1;
        time_t t;
        time_t T;
        long long i;
        struct tm *tm;
        char fechayhora[100];
        char FECHAYHORA[100];
          t=time(NULL);
          tm=localtime(&t);
          strftime(fechayhora, 100, "%H:%M", tm);
          printf ("La hora es:  %s\n\a", fechayhora);
          M=tm->tm_min;
       while(y==1){
          y=1;
          T=time(NULL);
          tm=localtime(&T);
          strftime(fechayhora, 100, "%H:%M", tm);
                N=(tm->tm_min);
          if(M!=N){
                printf("La hora es: %s\a\n",fechayhora);
                M=N;
          }
        }
return 0;
}//End Main
