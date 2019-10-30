#include <stdio.h>
#include <time.h>

i=0;

int main() {

for (i = 1; i >0; ++i){
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128," %H:%M",tlocal);
        printf("%s\n",output);
	sleep(60000);
	}
        return 0;
}
