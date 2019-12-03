#include<stdio.h>
int (*f)(int,int);
int (*g)(int,int);
int mcd(int,int);
int otro(int,int);
void funcion(int(*)(int,int),int,int);
static int W1,W2;
int main(){
    int h,k;
    printf("Introduzca el valor de H:\n");
    scanf("%d",&h);
    printf("Introduzca el valor de K\n");
    scanf("%d",&k);
    f=mcd;
    g=otro;
    funcion(f,h,k);
    printf("El resultado de la primera funcion es: %d\n",W1);
    funcion(g,h,k);
    printf("El resultado de la segunda funcion es: %d\n",W1);
}
void funcion(int(*f)(int, int),int Y,int Z){
    W1=(*f)(Y,Z);
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
