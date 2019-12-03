/*Escribe un programa que realice:
          (x+y)*(x+y)*(a-b)
Flores Negrete Azereth 1MM1*/

#include<stdio.h>
#include<stdlib.h>


void Leer (int &refx,int &refy,int &refa,int &refb);
void Calcular (int &refx,int &refy,int &refa,int &refb,int &refres);
void Imprimir (int &refres);

//*******************************Main***************************************************
int main ()
{
    int x,y,a,b,res;
    Leer(x,y,a,b);
    Calcular(x,y,a,b,res);
    Imprimir(res);
    
system("pause");
return 1;    
}//end main

//*****************************Leer******************************************************
void Leer (int &refx,int &refy,int &refa,int &refb)
{
  printf("Nota: Los valores a ingresar deben ser enteros entre -32768 a 32767\n");
  printf("Ingresa el valor de x: \n");
                  scanf("%d",&refx);
  printf("Ingresa el valor de y: \n");
                  scanf("%d",&refy); 
  printf("Ingresa el valor de a: \n");
                  scanf("%d",&refa); 
  printf("Ingresa el valor de b: \n");
                  scanf("%d",&refb);    
}//end Leer

//****************************Calcular*****************************************************
void Calcular (int &refx,int &refy,int &refa,int &refb,int &refres)
{
  refres=(refx+refy)*(refx+refy)*(refa-refb);
}//end Calcular

//*******************************Imprimir*************************************************
void Imprimir (int &refres)
{
     printf("El resultado es %d \n",refres);
}//end imprimir
