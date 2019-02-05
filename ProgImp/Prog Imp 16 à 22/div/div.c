#include <stdio.h>

int div(int a,int b)
{
    int result;
    result = a / b;
    printf("le resultat de la division de %d par %d est  \x1b[32m%d\n\033[00m\n", a, b, result);
    retrun result;
}

int main()
{
    int a, b;
    
    printf("Choisir la valeur de a: ");
    scanf("%d",&a);

    printf("Choisir la valeur de b: ");
    scanf("%d",&b);
    div(a, b);
}