/** ApuntadoresAFuncion.c
 * Apuntadores a funci\'on
 */ 
//directivas

int (*f)(int,int);
int (*g)(int,int);
void Funcion(int (*)(int,int),int,int);
int mcd(int,int);
int d(int,int);
int main(){
  int A,B;
// ... inicializar A y B
  f=mcd; 
  g=&d;
  Funcion(f,A,B);
  Funcion(g,A,B);
  return 0;
}/*end main()*/

int mcd(int N,int D)
{
  return D%N;
}

int d(int X,int Y)
{
  return Y-X;
}

