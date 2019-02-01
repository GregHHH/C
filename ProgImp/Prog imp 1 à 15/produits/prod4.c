#include <stdio.h>

int prod4(int n)
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
            prod = prod + (a * a * a * a);
            a++;
        }
        printf("Le produit des puissances 4 de 0 à %d est %d\n",n, prod);
    }    
}

int main()
{
    int n;

    n = 3;

 prod4(n);

}