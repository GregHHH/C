#include <stdio.h>

int multip(int a, int b)
{
    int final, tmp, c;
    final = (a * b);
    tmp = a;
    c = 2;
    
    while (a != final)
    {
        a = a + tmp;
        printf("%d fois: a + a = %d\n",c, a);
        c++;
    }
    printf("a x b =  \x1b[32m%d\n\033[00m\n", a);  
}
int main()
{
    int a, b;

    printf("выбери значение a: ");
    scanf("%d",&a);

    printf("выберите множитель b: ");
    scanf("%d",&b);

    multip(a, b);
}
