#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(int argc,char*argv[])
{
	int mien;
	mien=0;
	do{
		time_t tiempo=time(0);
		struct tm *tlocal=localtime(&tiempo);
		char output[10];
		strftime(output,10,"%H:%M",tlocal);
		printf("%s\n",output);

		Sleep(60000);
	}while(mien='0');
}
