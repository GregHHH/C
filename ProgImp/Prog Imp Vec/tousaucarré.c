#include <stdio.h>

void remplirv(int nb, int vec[100]) 
{
    int crt, pre, new, i;
    crt = 1;
    pre = 1;
    vec[0]=pre;
    vec[1]=crt;
    for (i=2; i <= nb; i = 1 + i) 
    {
       new = (crt + pre) % 23;
       vec[i] = new;
       pre = crt;
       crt = new;
    }
}

void voirvec (int vec [100], int nb) 
{
  int i;
  if (nb >= 100)
    return;
  for (i = 0; i < nb; i = i + 1) 
  {
	printf("vec[%3d] == %f\n",i, vec [i]);
  }
}

int main()
{
    int vec[100];
    int nb;
    nb = 20;
    remplirv(vec, nb);
    voirvec(vec, nb);
}
