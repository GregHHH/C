#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    if ((a >= b) && (a >= c) && (a >= d))
        return a;
    if ((b >= a) && (b >= c) && (b >= d))
        return b;
    if ((c >= a) && (c >= b) && (c >= d))
        return c;
    else
        return d;
}

int main()
{
    int a, b, c, d;

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("Le plus grand nombre est %d\n",max4(a, b, c, d));
}
