#include <stdio.h>

int fibo(int n)
{

    if (n < 2)
        printf("Le chiffre au rang 0 de la suite de fibonacci est égal à \x1b[32m%d\n\033[00m\n", n);
    if (n >= 2)
        return (fibo(n - 1) + fibo (n - 2));
}

int main()
{
    int n;

    printf("Afficher la valeur du rang n de la suite de Fibonacci: ");
    scanf("%d",&n);
    fibo(n);
}