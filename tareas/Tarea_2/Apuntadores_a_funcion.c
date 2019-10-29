#include<stdio.h>



int (*f)(int,int);

int (*g)(int,int);

int mcd(int,int);

int otro(int,int);

void funcion(int(*)(int,int),int,int);



static int Re1,Re2;



int main(){

    int a,b;



    printf("Introduzca el valor de A:\n");

    scanf("%d",&a);

    printf("Introduzca el valor de B\n");

    scanf("%d",&b);



    f=mcd;

    g=otro;



    funcion(f,a,b);

    printf("El resultado de la primera funcion es: %d\n",Re1);

    funcion(g,a,b);

    printf("El resultado de la segunda funcion es: %d\n",Re1);





}



void funcion(int(*f)(int, int),int Y,int Z){

    Re1=(*f)(Y,Z);

}



int mcd(int c,int d){

    int solve_1;

    solve_1=(c+d)-(c/d);



    return solve_1;

}





int otro(int e,int f){

    int solve_2;

    solve_2=(e+f)-(f/e);



    return solve_2;

}

