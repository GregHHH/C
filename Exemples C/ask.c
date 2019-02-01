#include <stdio.h>

int main()
{
    int n, i, sum;

    i = 1, sum = 0;

    printf("Enter Maximum Value(n):");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        ++i;
    }
    printf("Sum of squares of numbers from 1 to n is : %d\n ",sum);
}
