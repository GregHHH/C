#include <stdio.h>
#include <math.h>

int expo(int x, int n)

{
    int result, a;
    a = 0;
    
    while (a <= x)
    {
        result = result + pow(a, n);
        a++;
    }
    printf("La somme des nombres de 0 à %d à la puissance %d est égal à: \x1b[32m%d\n\033[00m\n", x, n, result);
    
    if (x < 1) 
    {
        printf("\e[0;31m erreur! X doit être positif! \n");
        return 0;
    }
}
int main()
{
    int x, n;

    printf("Choisir la valeur max de x: ");
    scanf("%d",&x);

    printf("à la puissance: ");
    scanf("%d",&n);

    expo(x, n);
}
