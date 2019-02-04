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
int sec5(int a, int b, int c, int d, int e)
{
    if ((a >= b) && (a >= c) && (a >= d) && (a >= e))
        return max4(b, c, d, e);
    if ((b >= a) && (b >= c) && (b >= d) && (b >= e))
        return max4(a, c , d, e);
    if ((c >= a) && (c >= b) && (c >= d) && (c >= e))
        return max4(a, b ,d ,e);
    if ((d >= a) && (d >= b) && (d >= c) && (d >= e))
        return max4(a, b, c , e);
    else
        return max4(a, b, c, d);
}
int main()
{
    int a, b, c, d, e;
    
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;

    printf("Le second plus grand nombre est %d\n",sec5(a, b, c, d, e));
}
