/**mcd.c*/

int mcd(int N, int D){
{
        int R;
  while((R=D%N)!=0)
  {
    D=N;
    N=R;
  }

  return N;
}
}
