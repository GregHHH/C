#include <stdio.h>

int add(int a, int b)
{   

    int final;
    final = (a + b);
        
     while (a != final)
    {
        if (b < 0)
        {
            a--;
            printf("a - 1 = %d\n", a);
        }
         if (b > 0)
        {
            a++;
            printf("a + 1 = %d\n", a);
        }
    }
    printf("a + b est égal à  \x1b[32m%d\n\033[00m\n", a);   
}
int main()
{
    int a, b;

    printf("Choisir la valeur de a: ");
    scanf("%d",&a);

    printf("Choisir la valeur de b: ");
    scanf("%d",&b);

    add(a, b);
}
