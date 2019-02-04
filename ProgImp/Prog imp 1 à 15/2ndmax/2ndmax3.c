#include <stdio.h>

int max2(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int sec3(int a, int b, int c)
{
    if ((a >= b) && (a >= c))
        return max2(b, c);
    if ((b >= a) && (b >= c))
        return max2(a, c);
    else
        return max2(a, b);
}

int main()
{
    int a, b, c;
    
    a = 1;
    b = 2;
    c = 3;
    
    printf("Le second plus grand nombre est %d\n",sec3(a, b, c));
}
