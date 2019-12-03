#include<stdio.h>
int (*f)(int,int);
int (*g)(int,int);
int mcd(int,int);
int otro(int,int);
void funcion(int(*)(int,int),int,int);
static int M1,M2;
int main(){
    int y,s;
    printf("Introduzca el valor de Y:\n");
    scanf("%d",&y);
    printf("Introduzca el valor de S\n");
    scanf("%d",&s);
    f=mcd;
    g=otro;
    funcion(f,y,s);
    printf("El resultado de la primera funcion es: %d\n",M1);
    funcion(g,y,s);
    printf("El resultado de la segunda funcion es: %d\n",M1);
}
void funcion(int(*f)(int, int),int Y,int Z){
    M1=(*f)(Y,Z);
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
