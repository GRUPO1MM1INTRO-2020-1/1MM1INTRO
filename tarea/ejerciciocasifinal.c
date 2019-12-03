
int f(int a, int b);

{
    int x,y,k;
    printf("Ingresa un valor x de 1 a 12\n");
    scanf("%i",&x);

    printf("Ingresa otro valor y entre 0 y 1\n");
    scanf("%i",&y);
    k=f(x,y);
    printf("%i",k);
    return 0;
}
int f(int x, int y)
{
    int p,v;
    if(x%2==0)
    {
        p=1; //par
    }
    else{
        p=0; //inpar
    }


    if ((x>=1)&&(x<=6))
    {
        if(p==1)
        {
            if (x!=2)
            {
                v=30;
            }
            else
            {
                if (y==0)
                {
                    v=28;
                }
                else if (y==1)
                {
                    v=29;
                }
                else{v=30;}
            }
        }
        else if (p==0)
        {
            v=31;
        }
    }
    else if ((x>=7)&&(x<=8))
    {
        v=31;
    }
    else if ((x>=9)&&(x<=12))
    {
        if (p==1)
        {
            v=31;
        }
        else if (p==0)
        {
            v=30;
        }
    }
    else
    {
        printf("Ingres un numero para los campos establecidos\n");
    }
    return v;

}
