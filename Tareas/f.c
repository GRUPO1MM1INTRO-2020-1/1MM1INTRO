//Romero Camacho Ares Tristan

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define paridad(x)	((x%2))

int r,x,y;

int f(int x, int y){
  if ((x<=6)&&(x>=1)&&(paridad(x)!=0)){
		r=31;}
	else if ((x<=6)&&(x>=1)&&(x!=2)&&(paridad(x)==0)){
		r=30;}
    else if ((x>=7)&&(x<=8)){
        r=31;}
    else if ((x>=9)&&(x<=12)&&(paridad(x)!=0)){
        r=30;}
    else if ((x>=9)&&(x<=12)&&(paridad(x)==0)){
        r=31;}
    else if ((x==2)&&(y==0)){
        r=28;}
    else if ((x==2)&&(y==1)){
        r=29;}
    else{
        r= 2020640456;}
printf("El resultado final es: %d",r);
}
