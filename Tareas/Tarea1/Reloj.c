#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(int argc,char* argv[]) {
	int n;	
	n=0;	
		do{
		
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%H:%M",tlocal);
        printf("%s\n",output);
		Sleep(60000);
	}while(n='0');	
        
}
