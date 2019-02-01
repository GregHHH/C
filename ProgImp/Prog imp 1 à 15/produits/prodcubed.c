#include <stdio.h>

int prodsqr(int n)
{
    int a, prod;

    a = 1;
    prod = 0;

    if (n < 1)
        return 0;
    else
    {
        while (a <= n)
        {
            prod = prod * (a * a * a);
            a++;
        }
        printf("Le produit des cubes de 0 à %d est %d\n",n, prod);
    }    
}

int main()
{
    int n;

    printf("Calcul de la somme des puissances 3 de 0 à n. \n Choisir la valeur de n: ");
    scanf("%d",&n);

    prodsqr(n);

}