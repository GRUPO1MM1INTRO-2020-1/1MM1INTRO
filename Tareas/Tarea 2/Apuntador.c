#include <stdio.h>
#include <stdlib.h>

int(*f)(int,int,int);
int(*g)(int,int,int,int);
void funcion1(int(*)(int,int,int),int,int,int);
void funcion2(int(*)(int,int,int,int),int,int,int,int);
int julia(int,int,int);
int roberts(int,int,int,int);
static int F,D;

  int main(){

   int C,P,G;

     printf("///////////  Programa por apuntadores y pasos por apuntador ///////////\n");

     printf("Ingrese el valor de A=\n");
     scanf("%i",&C);
     printf("Ingrese el valor de P=\n");
     scanf("%i",&P);
     printf("Ingrese el valor de G=\n");
     scanf("%i",&G);

     f=julia;
     funcion1(f,C,P,G);

     printf("El valor de la primera funcion es= %i \n",F);

        g=&roberts;

        funcion2(g,C,P,G,F);

    printf("El valor de la segunda funcion es= %i \n",D);



return 0;
}

int julia(int A, int O,int U){
int f=(A+O+U);
return f;
}
int roberts(int A, int O,int U, int R){
int y=(A+O)+(U*R);
return y;
}
void funcion1(int(*f)(int,int,int),int I ,int E,int Q)
{
    F=(*f)(I,E,Q);
}
void funcion2(int(*g)(int,int,int,int),int I,int E,int Q,int W)
{
    D=(*g)(I,E,Q,W);
}
