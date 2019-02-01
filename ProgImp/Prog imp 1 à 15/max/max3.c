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

int main()
{
    int a, b, c;

    a = 1;
    b = 2;
    c = 3;
    printf("Le plus grand nombre est %d\n",max3(a, b, c));
    
}