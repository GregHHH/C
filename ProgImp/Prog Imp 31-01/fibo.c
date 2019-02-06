#include <stdio.h>

int	fibo(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibo(n - 2) + fibo(n - 1));

}

int main()
{
    int n;

    printf("Afficher la valeur du rang n de la suite de Fibonacci: ");
    scanf("%d",&n);
    fibo(n);
}

