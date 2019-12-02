#include <stdio.h>
int main()
{
  float x,y,a,b,res;
  printf("Programa que resuelve siguiente exprecion (x+y)^2(a-b)\n");
  printf("x=");
  scanf("%f",&x);
  printf("y=");
  scanf("%f",&y);
  printf("a=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  res = (x+y)*(x+y)*(a-b);
  printf("res:%.2f",res);

}
