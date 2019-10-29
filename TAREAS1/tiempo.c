#include <time.h>
#include <stdio.h>
#include <windows.h>
int main()
{
  time_t t;
  struct tm *tm;
  char fechayhora[100];
  char hora [100];
  char min[100];
  char min2[100];
  t=time(NULL);
  tm=localtime(&t);
  strftime(fechayhora, 100, "%d/%m/%Y", tm);
  printf ("Hoy es: %s\n", fechayhora);
  strftime(hora,100,"%I:%M",tm);
  
  while (fechayhora == fechayhora){
 t=time(NULL); 
 tm=localtime(&t); 
 strftime(hora, 100, "%I:%M", tm);
  printf ("La hora es : %s\n",hora);
  strftime(min,100,"%M",tm);
  strftime(min2,100,"%M",tm);
  if (min != min2){
	  strftime(min,100,"%M",tm);
	  Sleep(61000);
  }
  else{ 
	
	  printf("La hora es: %S\n",hora);
  }
  }
  }



