#include <time.h>
#include <stdio.h>
#include <windows.h>

int main(int argc, int i, char* argv[])
{
	for (i=0;i<=10;i++){
  time_t t;
  struct tm *tm;
  char output[100];

  t=time(NULL);
  tm=localtime(&t);
  strftime(output, 100, "%H:%M", tm);
  printf ("La hora es: %s\n", output);

  Sleep(60000);
}
}
