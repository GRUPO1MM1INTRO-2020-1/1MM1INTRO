#include <stdio.h>

int A,B;

int mult (int N, int D) {return N*D;}
int cuad (int x) {return x*x;}


int main (char ** argv, int argc){
	
printf("Asigne el valor de A\n");
scanf("%d",&A);
printf("Asigne el valor de B\n");
scanf("%d",&B);

int (*f)(int,int);
int (*g)(int,int);
f=&mult;
g=&cuad;

printf("Multiplicacion de A y B: %d\n",mult(A,B));
printf("El cuadrado de A es: %d\n",cuad(A));
printf("El cuadrado de B es: %d\n",cuad(B));

return 0;

}
