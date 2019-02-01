#include <stdio.h>

int min5(int a, int b, int c, int d, int e)
{
    if ((a < b) && (a < c) && (a < d) && (a < e))
        return a;
    if ((b < a) && (b < c) && (b < d) && (b < e))
        return b;
    if ((c < a) && (c < b) && (c < d) && (c < e))
        return c;
    if ((d < a) && (d < b) && (d < c) && (d < e))
        return d;
    else
        return e;
}

int main()
{
    int a, b, c, d, e;

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;

    printf("Le plus petit nombre est %d\n",min5(a, b, c, d, e));
}