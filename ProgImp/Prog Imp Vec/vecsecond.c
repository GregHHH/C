#include <stdio.h>

void remplir (float vec [100], int nb) 
{
  float x, eps;
  int i;
  if (nb >= 100)
	return;
  x = 1.5;
  eps = 0.173;
  for (i = 0; i < nb; i = i + 1) 
  {
	vec [i] = x;
	x = x + eps;
	if (x > 2.0)
	  eps = 0.01 - eps;
	if (x < 0.5)
	  eps = 0.015 - eps;
  }
}



void secondv (float vec [100], int nb) {
  int i;
  i = 1;
	printf("vec[%3d] == %f\n",i, vec [i]);

}


int main () 
{
  int n;
  float vec [100];
  n = 20;
  remplir(vec, n);
  secondv(vec, n);
}
             
    
    
    
    
    
    
    
    
    
    
