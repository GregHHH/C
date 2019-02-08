#include <stdio.h>

int	fibo(int n)
{
	if (n < 0)
<<<<<<< HEAD
    printf("Le rang ne peut pas être négatif! \n");
		return (-1);
	if (n == 0)
    {
        printf("La valeur au rang 0 est 0");
		return (0);
    }
	if (n == 1)
    {
        printf("La valeur au rang 1 est 1");
		return (1);
    }
	else
		return (fibo(n - 2) + fibo(n - 1));
=======
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibo(n - 2) + fibo(n - 1));

>>>>>>> 0883743f7b025fb062e4dd8a5a92c4ad353a4a53
}

int main()
{
    int n;

    printf("Afficher la valeur du rang n de la suite de Fibonacci: ");
    scanf("%d",&n);
    fibo(n);
}

