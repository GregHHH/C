#include <stdio.h>

int max3(int a, int b, int c)
{
    if ((a > b) && (a > c))
        return a;
    if ((b > a) && (b > c))
        return b;
    else
        return c;
}

int sec4(int a, int b, int c, int d)
{
if ((a > b) && (a > c) && (a > d))
        return max3(b, c, d);
    if ((b > a) && (b > c) && (b > d))
        return max3(a, c, d);
    if ((c > a) && (c > b) && (c > d))
        return max3(a, b, d);
    else
        return max3(a, b, c);
}

int main()
{
    int a, b, c, d;
    
    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("Le second plus grand nombre est %d\n",sec4(a, b, c, d));
}