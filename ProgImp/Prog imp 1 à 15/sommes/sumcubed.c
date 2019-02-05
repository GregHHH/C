#include <stdio.h>

int sumcubed(int n)
{
    int a, cub;

    a = 1;
    cub = 0;

    if (n < 1)
        return 0;
    else
    {
        while (a <= n)
        {
            cub = cub + (a * a * a);
            a++;
        }
        printf("La somme des cubes de 0 à %d est %d\n",n, cub);
        return cub;
    }    
}

int main()
{
    int n;

    n = 3;

    sumcubed(n);
}