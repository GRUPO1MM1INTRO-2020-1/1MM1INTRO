#include <stdio.h>
int main()
{
    int n1, n2, i, mcd;
    char c;
    inicio:
    printf("Ingrese un numero:");
    scanf("%d", &n1);
    printf("Ingrese otro numero:");
    scanf("%d", &n2);
    for(i=1; i<=n1 && i<=n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            mcd = i;
    }
    printf("M.C.D de %d y %d es %d\n", n1, n2, mcd);
    printf("¿Quieres ingresar otros valores para calcular el M.C.D?\n");
    printf("Si (s)\n");
    printf("No (n)\n");
    scanf("%s",&c);
    if (c=='S'||c=='s'){
            printf("\n");
        goto inicio;
    } else if (c=='N'||c=='n'){
    return 0;
    }
    return 0;
}
