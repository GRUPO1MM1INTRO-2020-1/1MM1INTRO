#include <limits.h>
#include <stdio.h>


int main(int argc,char *argv[])
{
	int S,s,m,h;
	printf("Segundos: ");
	scanf("%d",&S);
	(!(S/60))?printf("%s:%s:%2.2d","00","00",S):
	((S/60)<60)?printf("%s:%2.2d:%2.2d\n","00",S/60,S%60):
	printf("%2.2d:%2.2d:%2.2d\n",S/3600,(S%3600)/60,(S%3600)%60);
	
	
	return 0;
}
