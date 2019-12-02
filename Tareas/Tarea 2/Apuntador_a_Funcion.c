#include <stdio.h>

int (*f)(int,int);
int (*g)(int,int);
void funcion(int(*)(int,int),int,int);
int mcd(int,int);
int lmc(int,int);

static int resultado;

int main(){
	//Inicializar A y B
	int A,B;
	printf("Introduzca el valor de A\n");
	scanf("%d",&A);
	printf("Introduzca el valor de B\n");
	scanf("%d",&B);
	//Inicializadas
	f=mcd;
	g=lmc;
	funcion(f,A,B);
	printf("\nPrimera funcion compara los valores de A y B\n");
	printf("%s\n",resultado);
	funcion(g,A,B);
	printf("\nSegunda funcion calcula el volumen de un cono con radio de la base A y altura B\n");
	printf("%d\n",resultado);
}

void funcion(int(*f)(int,int),int vy,int vc){
	resultado=(*f)(vy,vc);
}

int mcd(int t, int y){
	if(t==y){
		return "A es igual a B";
	}
	else if(t>y){
		return "A es mayor que B";
	}
	else if(y>t){
		return "B es mayor que A";
	}
}

int lmc(int r, int h){
	int vc;
	const float pi=3.1416;
	vc=pi*r*r*h/3;;
	return vc;
}
