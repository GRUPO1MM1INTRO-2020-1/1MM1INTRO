#include<stdio.h>
int main ()
{	
float x,y,a,b,res;
	printf("Digite los valores para resolver la ecuación (x+y)^2(a-b)\n");
	printf(" x= ");
	scanf("%f", &x);
	printf(" y= ");
	scanf("%f", &y);
	printf(" a= ");
	scanf("%f", &a);
	printf(" b= ");
	scanf("%f", &b);
	res=((x+y)*(x+y))*(a-b);	
	printf("Resultado = %.2f",res);
	return 0;
}
