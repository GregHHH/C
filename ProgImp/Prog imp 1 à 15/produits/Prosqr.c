#include <stdio.h>

int prodsqr(int n)
{
    int a, prod;

    a = 1;
    prod = 0;

    if (n < 1)
        return 0;
    else
    {
        while (a <= n)
        {
            prod = prod + (a * a);
            a++;
        }
        printf("Le produit des carrés de 0 à %d est %d\n",n, prod);
    }    
}

int main()
{
    int n;

    n = 3;

    prodsqr(n);
}