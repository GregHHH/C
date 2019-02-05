#include <stdio.h>

int sumsqr(int n)
{
    int a, sum;

    a = 1;
    sum = 0;

    if (n < 1)
        return 0;
    else
    {
        while (a <= n)
        {
            sum = sum + (a * a);
            a++;
        }
        printf("La somme des carrés de 0 à %d est %d\n",n, sum);
        return sum;
    }    
}

int main()
{
    int n;

    n = 3;

    sumsqr(n);

}