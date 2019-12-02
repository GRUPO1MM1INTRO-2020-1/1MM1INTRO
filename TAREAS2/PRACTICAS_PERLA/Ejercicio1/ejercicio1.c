#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y, a, b, res;
	printf("Ingresa el valor de x: \n");
	scanf("%d", &x);
	printf("Ingresa el valor de y: \n");
	scanf("%d", &y);
	printf("Ingresa el valor de a: \n");
	scanf("%d", &a);
	printf("Ingresa el valor de b: \n");
	scanf("%d", &b);
	res=(x+y)*(x+y)*(a-b);
	printf("\n\nRESULTADO= %d", res);
	return 0;
}
