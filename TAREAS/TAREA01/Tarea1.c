#include<stdio.h>
#include<math.h>
int (*f)(int,int);
int (*g)(int,int);
void funcion(int(*)(int,int),int,int);
void funcionG(int(*)(int,int),int,int);
int mcd(int,int);
int d(int,int);
static int J,k;
int main(){
	int A,B;
	printf("Programa que calcula la raíz cuadrada\nde la multiplicación de dos numeros \ny el triple producto del primero por el segundo al cubo\n");
	printf("\nIngrese A: ");
	scanf("%d",&A);
	printf("\nIngrese B: ");
	scanf("%d",&B);

	f=mcd;
	g=&d;
	funcion(f,A,B);
	funcionG(g,A,B);

	printf("\nRaíz= %d\n", J);
	printf("\nProducto= %d\n", k);


	return 0;
}
 
int mcd(int P,int R){
	int H;
	H= sqrt(P*R);
	return H;
}
int d(int P,int R){
	int L;
	L=3*P*R*R*R;
	return L;

}
void funcion(int(*f)(int,int),int x,int y){
	
	J=(*f)(x,y);	

}
	
void funcionG(int(*g)(int,int),int x,int y){
	k=(*g)(x,y);	
}
