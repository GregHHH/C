#include <stdio.h>

int PPCM(int a, int b)
{
    int c, d, e;

    if (b>a)
    {
        c=b;
        b=a;
        a=c;
    }

    if (a % b == 0)
        printf("\nLe PPCM est : \x1b[32m%d\n\033[00m\n",a);

    else
        d = (a * b);

    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
        e = d / a;
    printf("Le PPCM est : \x1b[32m%d\n\033[00m\n",e);

int main()
{
    int a, b;
    
    printf("Choisir la valeur de a: ");
    scanf("%d",&a);

    printf("Choisir la valeur de b: ");
    scanf("%d",&b);

    PPCM(a, b);
}