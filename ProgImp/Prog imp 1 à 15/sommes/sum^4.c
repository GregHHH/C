#include <stdio.h>

int sum4(int n)
{
    int a, katr;

    a = 1;
    katr = 0;

    if (n < 1)
        return 0;
    else
    {
        while (a <= n)
        {
            katr = katr + (a + a + a + a);
            a++;
        }
        printf("La somme de 0 à %d puissance 4 est %d\n",n, katr);
    }    
}

int main()
{
    int n;

    n = 3;

    sum4(n);
}