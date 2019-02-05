#include <stdio.h>
#include <math.h>

int expo(int x, int n)

{

    int result;
    result = pow(x, n);
    
    printf("%d à la puissance %d est égal à: \x1b[32m%d\n\033[00m\n", x, n, result);
    return result;
}
int main()
{
    int x, n;

    printf("Choisir la valeur de x: ");
    scanf("%d",&x);

    printf("à la puissance: ");
    scanf("%d",&n);

    expo(x, n);
}