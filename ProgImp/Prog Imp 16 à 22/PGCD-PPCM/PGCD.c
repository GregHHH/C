#include <stdio.h>

int PGCD(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("Le PGCD de a et b est \x1b[32m%d\n\033[00m\n", a);
    retrun a;
}

int main()
{
    int a, b;
    
    printf("Choisir la valeur de a: ");
    scanf("%d", &a);

    printf("Choisir la valeur de b: ");
    scanf("%d", &b);

    PGCD(a, b);
}
