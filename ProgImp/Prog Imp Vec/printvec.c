#include <stdio.h>

// affiche la valeur ascii des 
// caractères contenus dans les cases du vecteur


int printvec(int vec[10])
{
    int i;
    i = 0;
    while(vec[i] != '\0')&²²&                                                                                       azert²
    {
        printf("%d\n", vec[i]);
        i++;
    }
    return 1;
}

int main()
{
    int vec[10];

    vec[0] = '0';
    vec[1] = '1';
    vec[2] = '2';
    vec[3] = '3';
    vec[4] = '4';
    vec[5] = '5';

    printvec(vec);
    return 5;
}